#include <stdio.h>

/**
  *main - Entry point
  *
  *printf() function prints size of different data types
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %u\n", sizeof(a));
	printf("Size of an int: %u\n", sizeof(b));
	printf("Size of a long int: %u\n", sizeof(c));
	printf("Size of a long long int: %u\n", sizeof(d));
	printf("Size of a float: %u\n", sizeof(e));
	return (0);
}

