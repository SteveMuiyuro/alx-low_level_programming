#include "main.h"
/**
  *print_line -Function draws a straight line on the terminal
  *@n: Is the number of time the _ character is printed
  */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	_putchar('\n');
}

