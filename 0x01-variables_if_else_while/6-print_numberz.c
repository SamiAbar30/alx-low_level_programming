#include <stdio.h>

/**
 *main - entry point
 *Description: print_numberz
 *return: 0
*/

int main(void)
{
	char number='0';
	while(number<='9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
