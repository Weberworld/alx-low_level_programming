#include <string.h>
#include "main.h"

/**
 * print_alphabet - Void function
 *
 * Description: Prints all alphabets in lowercases
 *
 * Return: Void
 */
void  print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - Void Fucntion
 *
 * Description: Calls the print_alphabet func 10 times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		print_alphabet();
	}
}
