#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: the string to search in
* @c: the character to look for
*
* Return: pointer to the first occurrence of c, or NULL if not found
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}
