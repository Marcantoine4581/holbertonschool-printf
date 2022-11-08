#include "main.h"

/**
 * print_char - A function that prints a charactar
 * @args: character to print
 * Return: Always 1 (Succes)
 */
int print_char(va_list args)
{
	char character;

	character = va_arg(args, int);

	_putchar(character);
	return (1);
}
