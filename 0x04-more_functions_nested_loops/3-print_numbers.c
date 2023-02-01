#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 */
void print_numbers(void)
{
	int y;

	for (y >= 0 ; y <= 9 ; y++)
		_putchar((y % 10) + '0');

	_putchar('\n');
}
