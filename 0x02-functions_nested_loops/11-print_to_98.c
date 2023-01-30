#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural number from n to 98.
 * @n: the number to start counting from to 98
 * Return: void returns nothing.
 */
void print_to_98(int n)
{
	for (; n != 98; n += (n > 98) ? -1 : 1)
	{
		printf("%d, ", n);
	}
	printf("98\n");
}
