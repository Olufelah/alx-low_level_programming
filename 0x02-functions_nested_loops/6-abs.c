#include "main.h"

/**
 * _abs - calculates the absolute value of an integer
 * @y: the number to be calculated
 * Return: The absolute value or 0
 */

int _abs(int y)
{
	if (y < 0)
	{
		int abs_val;

		abs_val = y * -1;
		return (abs_val);
	}
	return (y);
}
