#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Print all hex values
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char hexLetters[6] = "abcdef";

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (i = 0 ; i < strlen(hexLetters); i++)
	{
		char l = hexLetters[i];

		putchar(l);
	}
	putchar('\n');
	return (0);
}
