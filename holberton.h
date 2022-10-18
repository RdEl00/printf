#ifndef Holberton_h
#define Holberton_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format,...);
int printc(va_list l);
int _putchar(char c);

/**
 * struct types - specifier structure for printf
 * @p: pointer to characters specifiers
 * @func: function pointer to print functions
 */

typedef struct types
{
	char *p;
	int (*func)(va_list);
}types;

#endif /*Holberton_h*/
