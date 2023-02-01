#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int diag, y;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (y = 0; y < diag; y++)
			_putchar(' ');
			_putchar('\\');

			if (diag == n - 1)
				continue;
		 
		_putchar('\n');
		}
	}
	 _putchar('\n');
}
