#include<unistd.h>
#include<holberton.h>

/**
 * main - putchar.c
 * Description: A program to print _putchar followed by a new line 
 * Reurn: 0
 */
int main (void)
{
	char string[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
		_putchar(string[a]);
	_putchar('\n');
	return (0);
}
