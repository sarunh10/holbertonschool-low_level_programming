#include <stdio.h>

/**
* is_printable - Checks if a character is printable
* @c: Character to check
* Return: 1 if printable, 0 otherwise
*/
int is_printable(char c)
{
return (c >= 32 && c <= 126);
}
/**
* print_buffer - Prints a buffer similar to hexdump
* @b: Pointer to buffer
* @size: Size of buffer
*/
void print_buffer(char *b, int size)
{
int i, j;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i); /* address */
/* Print hex values */
for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", (unsigned char)b[i + j]);
else
printf("  ");
if (j % 2)
printf(" ");
}
/* Print characters */
for (j = 0; j < 10 && (i + j) < size; j++)
{
char c = b[i + j];
printf("%c", is_printable(c) ? c : '.');
}
printf("\n");
}
}
