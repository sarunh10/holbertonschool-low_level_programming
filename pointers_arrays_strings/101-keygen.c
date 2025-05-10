#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates a valid password for 101-crackme
*
* Return: Always 0
*/
int main(void)
{
int sum = 0;
char c;
srand(time(NULL));
while (sum < 2772)
{
c = rand() % 128;
if ((sum + c) > 2772)
break;
sum += c;
printf("%c", c);
}
printf("%c", 2772 - sum);
return (0);
}
