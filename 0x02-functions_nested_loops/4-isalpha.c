i#include"main.h"
/**
 * _isalpha - checks for lowercase character
 * @c: prameter that we will test
 *
 * Return: return 1 if the params id lowercase or uppercaseoterwise return 0
*/
int _isalpha(int c)
{
	if (c >= 'a' &&  c <= 'z' || c >= 'A' &&  c <= 'Z')
		return (1);
	return (0);
}
