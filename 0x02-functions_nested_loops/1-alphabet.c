#include <string.h>
#include "main.h"

/**
 * print_alphabet - Function
 *
 * Description: Prints all alphabets in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
}
