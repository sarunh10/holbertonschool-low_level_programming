#include <stdio.h>

/**
* main - Prints the largest prime factor of the number 612852475143
*
* Return: Always 0.
*/
int main(void)
{
long num = 612852475143;
long factor = 2;
long largest = 0;
while (num > 1)
{
if (num % factor == 0)
{
largest = factor;
num /= factor;
while (num % factor == 0)
num /= factor;
}
factor++;
}
printf("%ld\n", largest);
return (0);
}
