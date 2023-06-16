#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'print all alphabet  lower case'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = strlen(alphabets);
	int i = 0;

	for (i = 0; i < len; i++)
	{
		char l = alphabets[i];

		putchar(l);
	}
	putchar('\n');
	return (0);
}
