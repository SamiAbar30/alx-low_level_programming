#include "main.h"

/**
 * print_line - entry point.
 * @n: param.
 * Description: a function that draws a straight line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
