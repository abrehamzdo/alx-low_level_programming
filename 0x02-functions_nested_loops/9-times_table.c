#include "main.h"
/**
 * times_table - Print 9 times table
 *
 * Return: 0 (Always Success)
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; a++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar('0');
			}
		        if (y != 0)
			{
				_putchar(' ');
				_putchar((c % 10) + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		        else
			{
				_putchar((z / 10) + '0');
				-putchar((z % 10) + '0');
				if (y < 9)
				{
					-putchar(',');
					-putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
