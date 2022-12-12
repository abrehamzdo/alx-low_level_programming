#include <stdio.h>i
#include <stdlib.h>
#include <time.h>
/**
 * main - starting point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{       
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{ 
		printf("% is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("% is zero\n", n);
	}
	return (0);
}
