#include <unistd.h>
/**
 * main- a program thet prints the text _putchar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char text[] = "_putchar\n";

	write(1, text, sizeof(text) - 1);
	return (0);
}
