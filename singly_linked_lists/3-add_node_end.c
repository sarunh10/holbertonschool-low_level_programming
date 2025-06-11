#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - Calculates the length of a string
* @s: The input string
* Return: The length of the string
*/
unsigned int _strlen(const char *s)
{
unsigned int i = 0;
while (s[i])
i++;
return (i);
}
/**
* add_node_end - Adds a new node at the end of a list_t list
* @head: A double pointer to the head of the list
* @str: The string to store in the new node (must be duplicated)
*
* Return: The address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
char *dup_str;
if (str == NULL)
return (NULL);
/* Duplicate the string */
dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);
/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(dup_str);
return (NULL);
}
/* Initialize the new node */
new_node->str = dup_str;
new_node->len = _strlen(str);
new_node->next = NULL;
/* If the list is empty, new node becomes the head */
if (*head == NULL)
{
*head = new_node;
}
else
{
/* Traverse to the end of the list */
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_node;
}
return (new_node);
}
