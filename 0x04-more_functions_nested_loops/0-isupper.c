#include "main.h"

/**
 * _isupper - checks the uppercase letter.
 * @c: character to test.
 * Return: 1 if it is uppercase.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

