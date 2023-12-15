#include <stdio.h>

/**
 *main - entry point
 *Description: print_numberz
 *return: 0
*/

int main(void)
{
	int number = 0;
	while(number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
