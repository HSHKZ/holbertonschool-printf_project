#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - Prints a character
 * @args: Arguments list
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - Prints a string
 * @args: Arguments list
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
 * print_decimal - Prints a decimal number
 * @args: Arguments list
 * Return: Number of characters printed
 */
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	int num, digit;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	num = n;

	while (num / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		count++;
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}

/**
 * print_integer - Prints an integer
 * @args: Arguments list
 * Return: Number of characters printed
 */
int print_integer(va_list args)
{
	return (print_decimal(args));
}
