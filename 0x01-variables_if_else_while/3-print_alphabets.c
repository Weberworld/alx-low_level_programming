#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all lower and upper case alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		char l_char = lower[i];

		putchar(l_char);
	}
	for (i = 0; i < 26; i++)
	{
		char u_char = upper[i];

		putchar(u_char);
	}
	putchar('\n');
	return (0);
}
