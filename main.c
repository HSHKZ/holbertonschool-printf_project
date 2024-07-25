#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length of _printf: %d\n", len);
    printf("Length of printf: %d\n\n", len2);

    len = _printf("Character:[%c]\n", 'M');
    len2 = printf("Character:[%c]\n", 'M');
    printf("Length of _printf: %d\n", len);
    printf("Length of printf: %d\n\n", len2);

    len = _printf("String:[%s]\n", "Chaussuuuuuuures !");
    len2 = printf("String:[%s]\n", "Chaussuuuuuuures !");
    printf("Length of _printf: %d\n", len);
    printf("Length of printf: %d\n\n", len2);

    len = _printf("Integer (%%d):[%d]\n", 123);
    len2 = printf("Integer (%%d):[%d]\n", 123);
    printf("Length of _printf: %d\n", len);
    printf("Length of printf: %d\n\n", len2);

    len = _printf("Integer (%%i):[%i]\n", 123);
    len2 = printf("Integer (%%i):[%i]\n", 123);
    printf("Length of _printf: %d\n", len);
    printf("Length of printf: %d\n\n", len2);

    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    printf("Length of _printf: %d\n", len);
    printf("Length of printf: %d\n\n", len2);

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Length of _printf: %d\n", len);
    printf("Length of printf: %d\n\n", len2);

    len = _printf("INT_MIN:[%d]\n", INT_MIN);
    len2 = printf("INT_MIN:[%d]\n", INT_MIN);
    printf("Length of _printf: %d\n", len);
    printf("Length of printf: %d\n\n", len2);

    return (0);
}

