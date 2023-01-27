#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This will print all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i <= 15; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(i - 10 + 'a');
}
}
putchar('\n');
return (0);
}

