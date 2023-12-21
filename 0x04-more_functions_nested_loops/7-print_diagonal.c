#include "main.h"

/**
 * print_line - entry point.
 * @n: param.
 * Return: multiplies two integers result.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = i - 1;
			while(j >= 0)
			{
			 _putchar(' ');
			 j--;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
