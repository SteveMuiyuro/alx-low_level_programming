#include "main.h"
/**
  *_memset - is a function that fills memory with a constant byte
  *@s: is a character pointer argument
  *@b: is a character argument
  *@n: is an interger variable
  *Return: a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
return (s);
}
