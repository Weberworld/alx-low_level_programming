#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all lowercase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letters[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		char l = letters[i];

		putchar(l);
	}
	putchar('\n');
	return (0);
}
