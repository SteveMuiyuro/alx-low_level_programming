#include "main.h"
/**
  *_strdup - a function that returns a pointer
  *to a newly allocated space in memory, which
  *contains a copy of the string given as a parameter.
  *@str: pointer to a string
  *Return: a pointer to a new string which is a duplicate of
  *the string str.
  */
char *_strdup(char *str)
{
		unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
