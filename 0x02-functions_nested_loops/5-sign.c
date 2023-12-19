#include"main.h"
/**
 * print_sign - checks for lowercase character
 * @n: prameter that we will test
 * Return: Returns 1 and prints + if n is greater than zero Returns 0 and prints 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}