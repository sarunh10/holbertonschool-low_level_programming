#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - Adds node at beginning
* @head: Pointer to head
* @n: Data to add
* Return: New node address or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head)
(*head)->prev = new;
*head = new;
return (new);
}
