#include "main.h"

/**
 *_islower - check main
 @c: An input character
Description: function uses _putchar function  to check if alphabet is lowercase or not
Return: 1 if lowercase or 0 if upprcase
*/
int _islower(int c)
{
	char a;
	int lower = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			lower = 1;
	}
	return (lower);
}
