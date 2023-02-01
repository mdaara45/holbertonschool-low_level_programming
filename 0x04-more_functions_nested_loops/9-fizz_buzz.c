#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, but for the multip
 * of 3 and 5 will print FizzBuzz
 *
 * Return: 0 for success.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
