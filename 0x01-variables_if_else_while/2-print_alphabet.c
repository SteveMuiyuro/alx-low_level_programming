#include <stdio.h>
#include <ctype.h>

/**
  *main - Entry point
  *
  *Return: 0 (Success)
  */
int  main(void)
{
	int b;

	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(tolower(b));
		putchar("\n");
	}
	return (0);
}
