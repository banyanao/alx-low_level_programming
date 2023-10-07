#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a randomly generated number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;

	int ldgt = n % 10;
	if (ldgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n , ldgt);
	}
	else if (ldgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n , ldgt);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n , n % 10);
	}
	return (0);
}
