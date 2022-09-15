#include "main.h"
/**
  *_isupper - This function checks for uppercase characters
  *@c: is the value being evaluated
  *Return: 1 otherwise 0
  */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'B')
		return (1);
	else
		return (0);
}

