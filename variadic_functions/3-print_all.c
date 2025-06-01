#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - يطبع أنواع مختلفة من �
* @format: سلسلة تحدد نوع
*/
void print_all(
const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *sep = "";
va_start(args, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
}
if (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's')
sep = ", ";
i++;
}
}
va_end(args);
printf("\n");
}
