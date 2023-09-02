#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Description: Prints the name of file
 * @argv: Values from command lines
 * @argc: length of argv
 *
 * Return: Always 0 (success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
