#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char z_a;

	for (z_a = 'z'; 'a' <= z_a; z_a--)
	{
		putchar(z_a);
	}

	putchar('\n');

	return (0);
}
