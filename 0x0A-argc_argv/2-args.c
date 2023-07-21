#include "main.h"

/**
 * main - Entry point
 * @argc: No of args passed
 * @argv: Str passed
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
