#include "main.h"

/**
* rot13 - Encodes a string using rot13.
* @str: The string to encode.
*
* Return: The encoded string.
*/
char *rot13(char *str)
{
int i, j;
char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
i = 0;
while (str[i] != '\0')
{
for (j = 0; j < 52; j++)
{
if (str[i] == in[j])
{
str[i] = out[j];
break;
}
}
i++;
}
return (str);
}
