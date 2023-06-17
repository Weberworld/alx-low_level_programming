#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabets in a reversed order
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i > -1; i--)
	{
		char l = alphabets[i];

		putchar(l);
	}
	putchar('\n');
	return (0);
}
