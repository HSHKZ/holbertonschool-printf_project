#include "main.h"
#include <stdio.h>

int main(void)
{
    int count1, count2;

    count1 = _printf("Character:[%c]\n", 'H');
    count2 = printf("Character:[%c]\n", 'H');
    printf("Printed %d characters with _printf\n", count1);
    printf("Printed %d characters with printf\n\n", count2);

    count1 = _printf("String:[%s]\n", "I am a string !");
    count2 = printf("String:[%s]\n", "I am a string !");
    printf("Printed %d characters with _printf\n", count1);
    printf("Printed %d characters with printf\n\n", count2);

    count1 = _printf("Integer:[%d]\n", 123);
    count2 = printf("Integer:[%d]\n", 123);
    printf("Printed %d characters with _printf\n", count1);
    printf("Printed %d characters with printf\n\n", count2);

    count1 = _printf("Negative:[%d]\n", -456);
    count2 = printf("Negative:[%d]\n", -456);
    printf("Printed %d characters with _printf\n", count1);
    printf("Printed %d characters with printf\n\n", count2);

    count1 = _printf("Percent:[%%]\n");
    count2 = printf("Percent:[%%]\n");
    printf("Printed %d characters with _printf\n", count1);
    printf("Printed %d characters with printf\n\n", count2);

    return (0);
}
