#include "math.h"
/**
  *print_diagonal - The function draws a diagonal line on the terminal
  *@n: number of times diagonal line is drwn on the terminal
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}

	}

}
