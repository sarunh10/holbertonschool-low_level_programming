#include "main.h"

/**
* factorial - returns the factorial of a number
* @n: the number
* Return: factorial result, or -1 if n < 0
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
