#include "main.h"
/**
  *main - a program that multiplies two numbers
  *@argc: arguments count
  *@argv: array of argument
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int i, j, k

	if (agrc != 3)
	{
		printf("error");
		return (1);
	}

	i = atoi(agrv[1]);
	j = atoi(agrv[2]);
	k = i * j;
	printf("%d\n", k);

	return (0);
}


