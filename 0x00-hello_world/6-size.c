#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * Description: Prints the size of all data types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* List all the data types */
	int num = sizeof(int);
	int text = sizeof(char);
	int dec = sizeof(float);
	int long_ = sizeof(long);
	int longer = sizeof(long long);

	/* Print the memory size by using the sizeof function */
	printf("Size of a char: %d byte(s)\n", text);
	printf("Size of an int: %d byte(s)\n", num);
	printf("Size of a long int: %d byte(s)\n", long_);
	printf("Size of a long long int: %d byte(s)\n", longer);
	printf("Size of a float: %d byte(s)\n", dec);
	return (0);
}
