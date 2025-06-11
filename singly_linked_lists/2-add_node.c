#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - returns the length of a string
* @s: the string
* Return: length
*/
unsigned int _strlen(const char *s)
{
unsigned int i = 0;
while (s[i])
i++;
return (i);
}
/**
* add_node - adds a new node at the beginning of a list_t list
* @head: double pointer to the head of the list
* @str: string to store in the new node (it will be duplicated)
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *dup_str;
if (str == NULL)
return (NULL);
dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(dup_str);
return (NULL);
}
new_node->str = dup_str;
new_node->len = _strlen(str); /* Replace strlen with _strlen */
new_node->next = *head;
*head = new_node;
return (new_node);
}
