#include "main.h"

/**
 * print_alphabet_x10 - check main
 * Description: function uses _putchar to print
 * alphabet in lower case
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
