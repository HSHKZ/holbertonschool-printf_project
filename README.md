README.md

# _printf Project

This project is a custom implementation of the `printf` function in C, adhering to the Betty coding style and the constraints of the GNU89 standard.

## Functionality

The `_printf` function supports the following conversion specifiers:
- `%c`: Prints a single character.
- `%s`: Prints a string of characters.
- `%%`: Prints a percent sign.

## Files

- `main.h`: Header file containing prototypes and include guards.
- `_printf.c`: Implementation of the `_printf` function.
- `_putchar.c`: Implementation of the `_putchar` function.
- `README.md`: Description of the project.

## Compilation

To compile the project, use the following command:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
