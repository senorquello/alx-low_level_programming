#include "main.h"

/**
 * print_sign - check main
 * @n: An input number
 * Description: My function prints sign of the number
 * Return: 1 if positive, o if 0, -1 if negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
