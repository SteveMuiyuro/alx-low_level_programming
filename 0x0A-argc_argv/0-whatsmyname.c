i#include "main.h"
/**
  *main -  prints its name, followed by a new line.
  *@argc: the count of the arguments to be compiled
  *@argv: the array of string arguments
  *Return: Always 0 (Success0
  */
int main(argc, char *argv[])
{
	if (argc == 0)
		printf("%s\n", argv[0]);

	return (0);
}
