#include "main.h"
#include <stdarg.h>

/**
 * check_format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */
int (*check_format(const char *format))(va_list)
{
	int i = 0;
	s_format type[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	while (type[i].sc)
	{
		if (type[i].sc[0] == (*format))
			return (type[i].f);
		i++;
	}
	return (NULL);
}

/**
 * _printf - function for format printing
 * @format: list of arguments to printing
 * Return: Number of characters to printing
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0, count_c = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count_c++;
			i++;
		}
		if (format[i] == '\0')
			return (count_c);
		f = check_format(&format[i + 1]);

		if (f != NULL)
		{
			count_c += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count_c++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (count_c);
}
