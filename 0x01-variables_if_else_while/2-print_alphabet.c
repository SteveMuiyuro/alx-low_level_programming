#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: 0 (Success)
  */
int  main(void)
{
	for (b = 'A'; b <= 'Z'; b++)
	{	b = toLower(b);
		putchar(b);
	}
	return (0);
}

