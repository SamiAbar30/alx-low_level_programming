#include <stdio.h>

/**
 *main - entry point
 *discription: print alphabet
 *return: 0
*/

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
