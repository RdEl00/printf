#include "holberton.h"
/**
 * _prinf - printf function
 * @format: variable
 * return: 0
 */


int _printf(const char *format, ...)

	va_list list;
	unsigned int i = 0, j = 0;

int _printf(const char *format, ...)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				j++;
			}
			else if (cmp_func(format, i + 1) != NULL)
			{
				j += (cmp_func(format, i + 1))(list);
				i++;
			}
			else
			{
				_putchar(format[i]);
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(list);
	return (j);
}

/**
 * cmp_func - Entry point
 * @a: Pointer
 * @ubc: integer
 *
 * Return: 0.
 */
int (*cmp_func(const char *a, int ubc))(va_list)
{
	print_f printf[] = {
		{"c", printc},
		{"s", print_string},
		{NULL, NULL}
	};
	int k;

	for (k = 0; printf[k].p != NULL; k++)
	{
		if (printf[k].p[0] == a[ubc])
		{
			return (printf[k].func);
		}
	}
	return (NULL);
}
