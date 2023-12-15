#include <stdio.h>

/**
 *main - entry point
 *Description: print alphabets
 *return:0
*/

int main(void)
{
	char lower = '0', upper = 'a';
	
	while (lower <= '9')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'f')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

        return (0);
}
