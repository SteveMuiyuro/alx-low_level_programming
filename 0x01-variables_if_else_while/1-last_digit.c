#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (n > 0)
	{
		ld = n % 10
		if (ld > 5)
			printf("%d and is greater than 5\n", ld);
		else if (ld == 0)
			printf("%d and is 0\n", ld);
		else if (ld < 6 && !0)
			printf("%d and is less than 6 and not 0\n", ld);

	return (0);
}
