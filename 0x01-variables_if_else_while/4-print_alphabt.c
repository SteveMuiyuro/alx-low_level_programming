#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int lower;

	lower = 'a';
	while (lower <= 'z' && !'q' && !'e')
	{
		putchar(lower);

	}
	putchar('\n');
	return (0);
}
