#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int i, x, res;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			res = i * x;
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && x != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
		}
	}
	_putchar('\n');
}
