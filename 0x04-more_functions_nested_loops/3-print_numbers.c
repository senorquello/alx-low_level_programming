#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 to 9
 * Return: Always 0
 */
void print_numbrs(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
