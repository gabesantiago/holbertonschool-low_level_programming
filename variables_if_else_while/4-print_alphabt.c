#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a newline EXCEPT q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		putchar (alpha);
	}

	putchar('\n');

	return (0);
}
