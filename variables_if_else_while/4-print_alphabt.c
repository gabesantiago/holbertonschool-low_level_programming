#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a newline EXCEPT q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		if (i = "e" "q")
		{
			continue;
		}
		putchar(alpha[i]);
	}

	putchar('\n');

	return (0);

}
