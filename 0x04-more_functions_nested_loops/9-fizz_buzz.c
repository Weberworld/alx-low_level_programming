#include "main.h"

/**
 * main - Fizz Buzz
 *
 * Description: Prints all num from 0 -100, but print
 * fizz if num is a multiple of 3, buzz
 * when num is a multiple of 5 and fizzbuzz when num is a multiple
 * of 5 anad 3 .
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (((i % 3) == 0)
			&&
			((i % 5) != 0))
		{
			printf("Fizz");
		}
		else if (((i % 5) == 0)
				&&
				((i % 3) != 0))
		{
			printf("Buzz");
		}
		else if (((i % 5) == 0)
				&&
				((i % 3) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
