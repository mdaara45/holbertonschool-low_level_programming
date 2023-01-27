#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This will print all single digit numbers of base 10 starting
 * from 0 followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char x = '0';
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
