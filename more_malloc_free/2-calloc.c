#include <stdlib.h>

/**
* _calloc - allocates memory for an array and initializes to zero
* @nmemb: number of elements
* @size: size of each element in bytes
* Return: pointer to the allocated memory, or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i, total_size;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < total_size; i++)
ptr[i] = 0;
return (ptr);
}
