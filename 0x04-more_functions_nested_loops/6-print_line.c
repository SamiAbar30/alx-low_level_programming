#include "main.h"

/**
 * print_line - entry point.
 * @n: param.
 * Return: multiplies two integers result.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
