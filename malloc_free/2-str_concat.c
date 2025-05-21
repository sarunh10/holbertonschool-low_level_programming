#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings into a new memory space
* @s1: first string
* @s2: second string
* Return: pointer to new string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
int i, j, len1 = 0, len2 = 0;
char *concat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < len2; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';
return (concat);
}
