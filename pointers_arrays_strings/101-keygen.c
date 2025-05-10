#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates a valid password for the program 101-crackme
*
* Return: Always 0.
*/
int main(void)
{
int sum = 0;
char c;
srand(time(NULL));
while (sum < 2772 - 33)
{
c = (rand() % 94) + 33;
sum += c;
printf("%c", c);
}
printf("%c", 2772 - sum);
return (0);
}
