#include "main.h"
/**
  *main - a program that prints all arguments it receives.
  *@argc: is the count of the number of argument
  *@argv: is the array of arguments
  *Return: Always 0 (Success)
  */
in main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar(argv[i]);
		_putchar('\n');
	}

	return (0);
}
