#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		putchar((i % 16) + '0');

	putchar('\n');

	return (0);
}
