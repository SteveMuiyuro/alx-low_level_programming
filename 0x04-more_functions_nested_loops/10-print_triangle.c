#include "main.h"
/**
  *print_triangle - Function print triangle followed by a newline
  *@size: argument
  */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');

			for (j = 0; j < i; i++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}

	}

	_putchar('\n');
}



