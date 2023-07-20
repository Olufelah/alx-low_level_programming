#include "main.h"

/**
 * print_last_digit - prints the last digit of numbers
 * @y: The number to be checked
 * Return: The value of the last digit of numbers
 */

int print_last_digit(int y)
{
	int z;
	z = y % 10;
	if (z < 0)
	{
		z = z * -1;
	}
	_putchar(z +'0');
	return (z);
}
