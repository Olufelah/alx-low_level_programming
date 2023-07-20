#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @y: The character to be checked
 * Return: 1 if lowercase or else return 0
 */

int _islower(int y)
{
	if (y >= 97 && y <= 122)
	{
		return (1);
	}
	return (0);
}
