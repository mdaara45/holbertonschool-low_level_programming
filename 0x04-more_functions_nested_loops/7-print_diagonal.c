#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int diag;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
			_putchar('/');
	}
	_putchar('\n');
}
