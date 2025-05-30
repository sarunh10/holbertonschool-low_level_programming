#include "function_pointers.h"

/**
* print_name - calls a function to print a name
* @name: the name to print
* @f: pointer to function that takes a string and returns nothing
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
