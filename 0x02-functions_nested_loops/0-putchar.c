#include <string.h>
#include "main.h"


/*
 * main - Entry point
 *
 * Description: prints text _putchar with a new line
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
