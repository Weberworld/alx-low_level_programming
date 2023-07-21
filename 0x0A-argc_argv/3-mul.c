#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: No of parameters
 * @argv: Strings passed
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
