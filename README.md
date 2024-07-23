# _printf Project

This project is a custom implementation of the `printf` function in C, adhering to the Betty coding style and the constraints of the GNU89 standard.

## Functionality

The `_printf` function supports the following conversion specifiers:
- `%c`: Prints a single character.
- `%s`: Prints a string of characters.
- `%d`: Prints an integer in decimal format.
- `%i`: Prints an integer in decimal format.
- `%%`: Prints a percent sign.

## Files

- `main.h`: Header file containing prototypes and include guards.
- `_printf.c`: Implementation of the `_printf` function.
- `_putchar.c`: Implementation of the `_putchar` function.
- `print_numbers.c`: Implementation of functions for printing numbers.
- `README.md`: Description of the project.

## Compilation

To compile the project, use the following command:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

## Man page :page_facing_up: :

To access the Man please follow these steps:
### Use this command : 
```
sudo cp _printf.3 /usr/share/man/man3/`
```
### Then use 
```
sudo mandb
```
### You can then open the man with 
```
man _printf
```
