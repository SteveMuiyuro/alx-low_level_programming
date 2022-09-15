#include "main.h"
/**
  *_isupper - This function checks for uppercase character
  *@c: This is the character being evaluated
  *Return: 1 or 0
  */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'B')
		return (1);
	else
		return (0);
}
