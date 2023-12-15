#include <stdio.h>
/**
 * main - entry point
 * Discription: positive or negative
 * Return: return 0
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
