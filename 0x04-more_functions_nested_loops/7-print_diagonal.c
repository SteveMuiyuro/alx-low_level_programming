#include "math.h"
/**
  *print_diagonal - The function draws a diagonal line on the terminal
  *@n: number of times diagonal line is drwn on the terminal
  */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar(47);
		_putchar('\n');
	}

}
