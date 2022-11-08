#include "main.h"
#include <unistd.h>

/**
 * print_string - A function that prints a string.
 * @args: string to print.
 * Return: Always 1 (Success)
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
