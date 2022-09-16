#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: 	An input integer
 * Return: Always 0.
 */
void print_line(int)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
