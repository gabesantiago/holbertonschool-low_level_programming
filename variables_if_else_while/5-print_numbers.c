#include <stdio.h>

/**
 * main - prints single digits of base 10 starting from 0
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int base_10;

	for (base_10 = 0; base_10 < 10; base_10++)
	{
		printf(base_10);
	}

	printf('\n');

	return (0);
}
