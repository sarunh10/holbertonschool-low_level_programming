#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: Pointer to the number.
* @index: Index of the bit to clear (starting from 0).
*
* Return: 1 if successful, -1 if error.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n = *n & ~(1UL << index);
return (1);
}
