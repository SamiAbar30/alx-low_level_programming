#include <stdio.h>
/**
 * main - entry point
 * Discription: positive or negative
 * Return: return 0
*/
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'q' && lower != 'e')
			putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
