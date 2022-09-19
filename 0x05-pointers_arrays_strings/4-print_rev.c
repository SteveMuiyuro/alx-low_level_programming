#include "main.h"
/**
  *print_rev - is a function that prints in reverse followed by a newline
  *@s: is a string pointer argument
  */
void print_rev(char *s)
{

	int i = 0, j;

	while (s[j++])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');

}

