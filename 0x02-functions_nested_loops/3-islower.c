#include "main.h"
#include <unistd.h>
/**
 * _islower - test whether a character is a 
 * lowercase letter from the Alphabet
 * @c: character to test.
 * Return 1 if it is lowercase letter, 0 if it is not lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
