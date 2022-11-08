#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - definition of structure
 * @sc: The specifiers
 * @f: function
 */
typedef struct s_format
{
	char *sc;
	int (*f)(va_list arg);
} s_format;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);

#endif /* _MAIN_H */
