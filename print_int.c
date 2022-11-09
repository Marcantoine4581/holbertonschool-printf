#include "main.h"
#include <stdlib.h>

/**
 * print_decimal - A function that prints an integer
 * @i: integer to print.
 * Return: number of characters.
 */
int print_int(va_list i)
{
	int n, buffer_n, len, power_ten, j, digit, count_c = 0;

	n = va_arg(i, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count_c++;
		}
		/*len should be equal the the nunber of digit of n. if n = 5460, len = 4 */
		buffer_n = n;
		len = 0;
		while (buffer_n != 0)
		{
			buffer_n /= 10;
			len++;
		}
		/*if len - 1 = 3 power_ten = 1000 */
		power_ten = 1;
		for (j = 1; j <= len - 1; j++)
			power_ten *= 10;

		/*when j = len = 4 */
		for (j = 1; j <= len; j++)
		{
			/*we extract the first digit of n. digit = 5 = 5460 / 1000 */
			digit = n / power_ten;
			/*we print the digit */
			if (n < 0)
				_putchar((digit * -1) + '0');
			else
				_putchar(digit + '0');

			count_c++;
			/*we delete the digit we just printed. n = 460 = 5460 - 5 * 1000 */
			n -= digit * power_ten;
			power_ten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count_c);
}
