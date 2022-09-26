#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to a string
 * @b: constaant byte
 * @n: first bytes to change
 * Reurn: pointer to modified string
 */
char _*memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
