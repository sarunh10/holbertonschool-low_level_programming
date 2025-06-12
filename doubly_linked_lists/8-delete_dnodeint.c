#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes the node at a given index
* @head: Pointer to pointer to the head of the list
* @index: The index of the node to delete
* Return: 1 on success, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i = 0;
if (*head == NULL)
return (-1);
/* Special case: delete head node */
if (index == 0)
{
*head = temp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}
/* Traverse to the node at given index */
while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}
if (temp == NULL)
return (-1);
/* Fix links and delete node */
if (temp->prev != NULL)
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
free(temp);
return (1);
}
