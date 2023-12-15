#include <stdio.h>
/**
 * main - entry point
 * Discription: positive or negative
 * Return: return 0
*/
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
