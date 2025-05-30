#include "function_pointers.h"
#include <stddef.h>

/**
* int_index - searches for the first element that matches a given condition
* @array: the array to search in
* @size: the number of elements in the array
* @cmp: the function used to compare values
* Return: the index of the first matching element, or -1 if none matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
