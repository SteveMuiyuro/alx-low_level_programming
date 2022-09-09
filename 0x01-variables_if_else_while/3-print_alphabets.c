#include <stdio.h>
#include <ctype.h>

/**
  *main - Entry point
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{	putchar(lower);
		putchar(toupper(lower));

	}

	putchar('\n');
	return (0);
}
