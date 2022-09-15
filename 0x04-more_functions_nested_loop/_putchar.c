#include "main.h"
#include <unistd.h>
/**
  *_putchar - writes the c chracter to stdout
  *@c: is the value being evaluated
  *Return: 0 (Success)
  */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
