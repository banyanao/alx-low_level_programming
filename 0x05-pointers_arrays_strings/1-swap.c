#include "main.h"

/**
 * swap_int - swaps the value of a and b
 * @a: pointer value a
 * @b: pointer value b
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
