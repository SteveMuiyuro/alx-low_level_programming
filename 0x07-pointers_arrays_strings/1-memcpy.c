#include "main.h"
/**
  *_memcpy - is a function that copies memory area
  *@dest: First character pointer argument
  *@src: Second character pointr argument
  *@n: number of bytes
  *Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	int = 0;

	char *x = dest;


	while (i < n)
	{	*dest++ = *src++;
		i++;
	}

	return (x);
}


