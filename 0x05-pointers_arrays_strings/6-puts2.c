#include "main.h"

/**
 * puts2 - function to print only one character out of two
 * beginning with the first one
 * @str: Input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int i = 0;
	char *x = str;
	int a;

	while (*x != '\0')
	{
		x++;
		longi++;
	}
	i = longi - 1;
	for (a = 0; a <= i; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
