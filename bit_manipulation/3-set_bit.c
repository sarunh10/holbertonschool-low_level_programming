#include "main.h"

/**
* set_bit - Sets the value of a bit to 1 at a given index.
* @n: Pointer to the number.
* @index: Index of the bit to set (starting from 0).
*
* Return: 1 if successful, -1 if error.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1); /* index out of range */
*n = *n | (1UL << index); /* set the bit using OR and shifting */
return (1);
}
