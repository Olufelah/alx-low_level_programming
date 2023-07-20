#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @y: The number to be checked
 * Return: 1 if number is positive,  -1 if number is negative or else 0
 */

int print_sign(int y)

{
	if (y > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (y < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
