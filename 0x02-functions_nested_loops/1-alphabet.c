#include "main.h"
/**
 * Print Alphabet
 * Description: A prgram to print alphabets in lower case followed by a new line 
 * Return: Nothing
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z''; i++)
		_putchar(i);
	_putchar('\n');
}
