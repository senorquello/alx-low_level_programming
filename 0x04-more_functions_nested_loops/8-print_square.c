#include "main.h"

/**
 * print_square - Write a function that prints a square
 * followed by a new line 
 * @size: An input integer
 * Return: Always 0
 */
void print_square(int size)
{
	int i, j;
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
