#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  /* for size_t */

/**
* struct dlistint_s - doubly linked list node
* @n: integer value stored in the node
* @prev: pointer to the previous node
* @next: pointer to the next node
*
* Description: node structure for a doubly linked list
*/
typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;
/* Function prototype */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif /* LISTS_H */
