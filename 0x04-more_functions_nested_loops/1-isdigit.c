#include "main.h"

/**
 * _isdigit - checks for the digit 0 to 9.
 * @c: character to check
 * Return: 1 if it is a digit, 0 if not a digit
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
