#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This will print the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
for (char c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
