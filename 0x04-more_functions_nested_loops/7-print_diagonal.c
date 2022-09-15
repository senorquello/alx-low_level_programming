#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: An input integer
 * Return: Always 0
 * */
void print_diagonal(int n)
{
	int draw, space;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
				for (space = 1; space < draw; space++)
					_putchar(' ');
				_putchar('\ \');
				_putchar('\n');
		}
	}
		else
			_putchar('\n');
}
