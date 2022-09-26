#include "main.h"

/**
 * _memcpy - a function that copys memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

		if (size > 0)
		{
			int i;
			for (i = 0; i < size; i++)
				dest[i] = src [i];
		}
	return (dest);
}
