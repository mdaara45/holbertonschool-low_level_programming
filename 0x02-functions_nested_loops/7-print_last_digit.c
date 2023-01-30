#include "main.h"
/**
 * print_last_digit - prints last digit of a number.
 * @n: digit to find the place of
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int lastn = n % 10;

	if (lastn < 0)
	{
		lastn = -lastn;
		_putchar(lastn + '0');
	}
	return (lastn);
}
