#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_string - Prints a string to stdout
 * @str: String to print
 *
 * Return: Number of chaaracters printed
 */
int print_string(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}

/**
 * print_char - Prints a single character
 * @c: Character to print
 *
 * Return: Number of characters printed
 */
int print_char(char c)
{
	return (_putchar(c));
}

/**
 * _printf - Produces output according to a format
 * @format: Character string
 *
 * Return: Number of characters printed (excluding the null)
 */
int_printf(const char *format, ...)
{
	va_list args;
	const char *p;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == 'c')
				count += print_char(va_arg(args, int));
			else if (*p == 's')
				count += print_string(va_arg(args, char *));
			else if (*p == '%')
				count += _putchar('%');
			else
			{
				count += _putchar('%');
				count += _putchar(*p);
			}
		}
		else
		{
			count += _putchar(*p);
		}
	}

	va_end(args);
	return (count);
}
