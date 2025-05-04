# 0 "0-main.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "0-main.c"
# 1 "function_pointers.h" 1
# 2 "0-main.c" 2






void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
