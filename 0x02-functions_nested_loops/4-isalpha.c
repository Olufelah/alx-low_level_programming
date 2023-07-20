#include "main.h"

/**
 * _isalpha - Checks alphabet characters
 * @y: The character to be checked
 * Return: 1 if character is alphabet character or else return 0
 */

int _isalpha(int y)
{
	if ((y >= 65 && y <= 97) || (y >= 97 && y <= 122))
	{
		return (1);
	}
	return (0);
}
