#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicates a string in new memory
* @str: the string to duplicate
* Return: pointer to the new string, or NULL if it fails
*/
char *_strdup(char *str)
{
int i = 0, len = 0;
char *copy;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);
for (i = 0; i < len; i++)
copy[i] = str[i];
copy[i] = '\0';
return (copy);
}
