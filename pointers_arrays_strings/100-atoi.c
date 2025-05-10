#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: string to be converted
*
* Return: integer converted from the string
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
while (*s != '\0')
{
if (*s == '-')
sign *= -1;
else if (*s == '+')
; /* do nothing */
else if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
}
else if (num > 0)
break;
s++;
}
return (num *sign);
}
