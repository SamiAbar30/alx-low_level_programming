#include <stdio.h>
/**
 * main - entry point
 * Discription: positive or negative
 * Return: return 0
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
