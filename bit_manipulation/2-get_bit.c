#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number to check.
* @index: The index of the bit to get (starting from 0).
*
* Return: Value of the bit (0 or 1), or -1 if error.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);  /* index out of range */
return ((n >> index) & 1);  /* shift right then mask with 1 */
}
