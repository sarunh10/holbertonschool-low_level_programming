#include <stdlib.h>

/**
* array_range - creates an array of integers from min to max
* @min: starting value of the array
* @max: ending value of the array
* Return: pointer to the array, or NULL if min > max or malloc fails
*/
int *array_range(int min, int max)
{
int *arr;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min + i;
return (arr);
}
