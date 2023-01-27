#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This will print all possible single-digit numbers
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int i = 0; i <= 9; i++)
{
for (int j = i + 1; j <= 9; j++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
}
}
return (0);
}
