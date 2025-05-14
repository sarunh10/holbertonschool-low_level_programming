#ifndef MAIN_H
#define MAIN_H

void swap_int(int *a, int *b);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
void reset_to_98(int *n);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _putchar(char c);
void print_chessboard(char (*a)[8]);
#endif
