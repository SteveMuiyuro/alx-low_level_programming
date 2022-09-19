#include "main.h"
/**
  *_puts - This function prints a string followed by a newline
  *@str: This is a string pointer argument
  */
void _puts(char *str)
{
	int i = 0;

	while (*str[i] != '\0')
		_putchar(*str[i]);
		i++;
	_putchar('\n');

}

