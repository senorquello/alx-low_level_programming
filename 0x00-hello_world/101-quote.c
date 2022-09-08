#include<stdio.h>
#include<unistd.h>
/**
 * main - Prints standard error
 * Return: 1 if success
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59, 1, stderr);
	return (1);
}
