#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a linked list
* @head: Pointer to the head of the list
*/
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head->next;     /* Save next node */
free(head->str);       /* Free string in current node */
free(head);            /* Free current node */
head = temp;           /* Move to next node */
}
}
