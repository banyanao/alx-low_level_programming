#include "main.h"

/**
 * puts_half - puts half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int length = 0;
	int start_index = (length - 1) / 2;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = start_index; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
