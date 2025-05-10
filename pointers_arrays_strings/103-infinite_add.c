#include "main.h"
#include <stdio.h>

/**
* infinite_add - Adds two numbers stored as strings.
* @n1: First number.
* @n2: Second number.
* @r: Buffer to store the result.
* @size_r: Size of the buffer.
*
* Return: Pointer to result or 0 if result cannot fit in r.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, carry = 0, sum, k = 0;
int len1 = 0, len2 = 0;
/* Find lengths of both numbers */
while (n1[len1])
len1++;
while (n2[len2])
len2++;
i = len1 - 1;
j = len2 - 1;
k = size_r - 1;
r[k] = '\0';
k--;
while (i >= 0 || j >= 0 || carry)
{
if (k < 0)
return (0); /* Not enough space */
sum = carry;
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';
r[k--] = (sum % 10) + '0';
carry = sum / 10;
}
return (r + k + 1);
}
