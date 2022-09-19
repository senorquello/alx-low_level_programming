#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random generator for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k, s;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz;
	char p[58];
	srand(time(NULL));
	while (s != 2772)
	{
		i = k = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			p[i] = c[i];
			s += c[j];
			i++;
		}
		while (c[k])
		{
			if (c[k] == (2772 - s))
			{
				p[i] = c[k];
				s += c[k];
				i++;
				break;
			}
			k++;
		}
	}
	p[i] = '\10';
	printf("%s", p);
	return (0);
}
