#include"main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 * @c: prameter that we will test
 * Discription: prints the last digit of a number
 * Return: return 1 if the params id lowercase or uppercaseoterwise return 0
*/
int print_last_digit(int c)
{
	int result;

	if (c < 0)
		result = (-1) * (n % c);
	else
		result = n % c;
	_putchar('0' + result);
	return (result);
}
