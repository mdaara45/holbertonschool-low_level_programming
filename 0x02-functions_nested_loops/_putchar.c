#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the characteer c to stdout
 *
 *
 * Returnn: On success 1.
 * On Error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
