#include"main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: prameter that we will test
 *
 * Return: return 1 if the params id lowercase or uppercaseoterwise return 0
*/
int _abs(int c)
{
	if (c < 0)
		c = (-1) * c;
	return (c);
}
