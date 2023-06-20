#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a newline EXCEPT q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';

	while ('a' <= 'z')
	{
		putchar(alpha);
		alpha++;
		if (alpha != 'q' && alpha !='e')
		{
			continue;
		}
	}

	putchar('\n');

	return (0);
}
