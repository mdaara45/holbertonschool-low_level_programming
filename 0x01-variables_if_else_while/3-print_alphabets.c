#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This will print the alphabet in lowercase and alphabet uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');
return (0);
}
