#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings up to n bytes of s2
* @s1: first string
* @s2: second string
* @n: number of bytes to include from s2
* Return: pointer to the newly allocated string, or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
char *new_str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n > len2)
n = len2;
new_str = malloc(len1 + n + 1);
if (new_str == NULL)
return (NULL);
for (; i < len1; i++)
new_str[i] = s1[i];
for (; j < n; j++)
new_str[i + j] = s2[j];
new_str[i + j] = '\0';
return (new_str);
}
