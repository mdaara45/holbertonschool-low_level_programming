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
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
