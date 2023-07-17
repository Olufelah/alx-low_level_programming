#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	int y;

	x = 'a';
	y = 0;
	while
		(x <= 'f') {
			putchar(x);
			x++;
		}
	while
		(y < 10) {
			putchar(y + '0');
			y++;
		}
	putchar('\n');
	return (0);
}
