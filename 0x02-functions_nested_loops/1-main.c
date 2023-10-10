#include "main.h"
#include <unistd.h>

/**
 * _putchar - Custom function to print a character
 * @c: the character to print
 *
 * Return: On success, the character was printed 
 * On error, return -1 and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
}
