#include <stdio.h>

/**
 *main - entry point
 *discription: print alphabet
 *return: 0
*/

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
