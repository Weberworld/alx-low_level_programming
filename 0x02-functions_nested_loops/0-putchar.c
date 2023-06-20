#include <stdio.h>
#include <string.h>

/*
 * main - Entry point
 *
 * Description : Prints text _putchar with a new line
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char text[10] = "_putchar";
	int len = strlen(text);
	int counter;

	for (counter = 0; counter < len; counter++)
	{
		char str = text[counter];

		putchar(str);
	}
	putchar('\n');
	return (0);
}
