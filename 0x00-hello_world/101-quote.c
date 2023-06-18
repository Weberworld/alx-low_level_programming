#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints texts with special character without  using printf and puts
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int counter;
	int len = strlen(quote);

	for (counter = 0; counter < len; counter++)
	{
		char letter = quote[counter];

		putchar(letter);
	}
	putchar('\n');
	return (1);
}
