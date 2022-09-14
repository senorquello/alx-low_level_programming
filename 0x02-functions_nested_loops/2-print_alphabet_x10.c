#include "main.h"

/**
 * print_alphabet_x10 - check main
 * Description: Using _putchar to print alphabet 10 times
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char a;
	char b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
		       _putchar(a);
			_putchar('\n');
		}
	}
}
