#include <stdio.h>

/**
 * printPutchar - Function
 *
 * Description: Prints the text _putchar with a new line
 *
 * Return: Always 0 (success)
 */
int printPutchar(void);

/**
 * _putchar - Writes the char c to the stdo
 * @c: The character to be writed out
 *
 * Return: On success 1
 */
void _putchar(char c);

/**
 * print_alphabet - Funtion protoype
 *
 * Description: Prints all alphabets in lowercase
 *
 * Return: Void
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - Funtion prototype
 *
 * Description: Prints all alphabets 10x
 *
 * Return: Void
 */
void print_alphabet_x10(void);

/**
 * _islower - Tells if chars are lowrcase or not
 * @c - Character to check
 *
 * Return: 1 if char is lowercase and 0 if it is not
 */
int _islower(char c);

/**
 * _isalpha - Telss if a passed char is an alphabet
 * @c: Character to check
 *
 * Return: 1 if char is an alphabet and - if not
 */
int _isalpha(char c);

/**
 * print_sign - Return the sign on a number
 * @n: Number to check
 *
 * Return: 1 if n is greater than 1, 0 if n is 0, -1 if n is lesser than 1
 */
int print_sign(int n);

int print_last_digit(int);

int _abs(int);

void jack_bauer(void);

void times_table(void);
