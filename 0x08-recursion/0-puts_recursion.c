#include "main.h"
/**
  *_puts_recursion - This function  prints a string, followed by a new line.
  *@s: is the pointer to the string parameter
  */
void _puts_recursion(char *s)
{
	if (*str == "\0")
		return;
	_putchar(*s);
	_putchar('\n');
	_puts_recursion(*s + 1);

}
