#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - Adds node at end
* @head: Pointer to head
* @n: Data to add
* Return: New node address or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp = *head;
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (!*head)
{
new->prev = NULL;
*head = new;
return (new);
}
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
new->prev = tmp;
return (new);
}
