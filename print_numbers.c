#include "main.h"
#include <limits.h>
#include <stdarg.h>

/**
 * print_number - Recursively prints a number
 * @n: Number to print
 */
void print_number(int n, int *count)
{
	if (n == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648, count);
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		(*count)++;
	}

	if (n / 10)
		print_number(n / 10, count);

	_putchar(n % 10 + '\0');
	(*count)++;
}

/**
 * print_decimal - Prints a decimal number
 * @args: Arguments list
 *
 * Return: Number of characters printed
 */
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	print_number(n, &count);
	return (count);
}
