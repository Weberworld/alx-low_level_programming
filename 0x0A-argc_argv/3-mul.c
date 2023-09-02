#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Mutiplies two numbers and print their product
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	int product;

	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
