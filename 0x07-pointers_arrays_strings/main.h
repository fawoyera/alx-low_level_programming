#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <unistd.h>
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
#define NULL ((void *)0)
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void _putchar(char c);
void print_diagsums(int *a, int size);



#endif /* _MAIN_H_ */
