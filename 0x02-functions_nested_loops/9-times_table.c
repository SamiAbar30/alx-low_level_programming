#include"main.h"
/**
 *times_table - computes the absolute value of an integer
 *Discription: prints the last digit of a number
 *Return: return 1 if the params id lowercase or uppercaseoterwise return 0
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;
			_putchar((result % 10) + '0');
			if (result > 9)
				_putchar((result / 10) + '0');
			if (i > 0)
				_putchar(' ');
			if (j != 9)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
		}
		_putchar('\n');
	}
}
