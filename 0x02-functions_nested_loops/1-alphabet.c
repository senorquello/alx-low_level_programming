#include "main.h"
/**
 * Print Alphabet
 * Description: A prgram to print alphabets in lower case followed by a new line 
 * Return: Nothing
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z''; a++)
		_putchar(a);
	_putchar('\n');
}
