#include "main.h"

/**
 * print_most_numbers - a functionthat prints the numbers, 0-9
 * DO not print 2 and 4
 * followed by a new line 
 * Return: Always 0
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
