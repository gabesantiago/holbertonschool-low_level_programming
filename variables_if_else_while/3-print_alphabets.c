#include <stdio.h>

/**
 * main - prints alphabet in lowercase followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
        char alp[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
	'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

        int i;

        for (i = 0; i < 2; i++)
        {
                putchar(alp[i]);
        }
        putchar('\n');

        return (0);
}

