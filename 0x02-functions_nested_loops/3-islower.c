#include"main.h"
/**
 * _islower - checks for lowercase character
 * @c: prameter that we will test
 *
 * Return: return 1 if the params id lowercase otherwise 0
*/
int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
		return (1);
	return (0);
}
