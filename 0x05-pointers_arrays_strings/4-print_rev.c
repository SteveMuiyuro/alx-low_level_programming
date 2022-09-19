#include "main.h"
/**
  *print_rev - is a function that prints in reverse followed by a newline
  *@s: is a string pointer argument
  */
void print_rev(char *s)
{
	int i;

	i = strlen(s);

	while (i > 0)
		_putchar(s[i]);
		i--;

	_putchar('\n');
}

