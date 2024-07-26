#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
    int value_max_plus_1024;
    int value_min_minus_1024;
    int value_min_plus_1024;
    int value_max_minus_1024;
    int result_subtract;
    int result_add;

    value_max_plus_1024 = INT_MAX - 1024;
    value_min_minus_1024 = INT_MIN + 1024;
    value_min_plus_1024 = INT_MIN + 1024;
    value_max_minus_1024 = INT_MAX - 1024;
    result_subtract = 1024 - 2048;
    result_add = INT_MIN + INT_MAX;

    _printf("%c", '\0');
    _printf("%d\n", 1024);
    _printf("%d\n", -1024);
    _printf("%d\n", 0);
    _printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MIN);
    _printf("%d\n", value_max_plus_1024);
    _printf("%d\n", value_min_minus_1024);
    _printf("There is %d bytes in %d KB\n", 1024, 1);
    _printf("%d - %d = %d\n", 1024, 2048, result_subtract);
    _printf("%d + %d = %d\n", INT_MIN, INT_MAX, result_add);
    _printf("%i\n", 1024);
    _printf("%i\n", -1024);
    _printf("%i\n", 0);
    _printf("%i\n", INT_MAX);
    _printf("%i\n", INT_MIN);
    _printf("%i\n", value_max_minus_1024);
    _printf("%i\n", value_min_plus_1024);
    _printf("There is %i bytes in %i KB\n", 1024, 1);
    _printf("%i - %i = %i\n", 1024, 2048, result_subtract);
    _printf("%i + %i = %i\n", INT_MIN, INT_MAX, result_add);
    _printf("%d == %i\n", 1024, 1024);
    _printf("iddi%diddiiddi\n", 1024);
    _printf("%d\n", 10000);
    _printf("%i\n", 10000);

    return (0);
}
