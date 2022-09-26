#include "main.h"
/**
  *_strchr - The function locates a character in a string
  *@s: is a string pointr argument
  *@c: is a character
  *Return: a pointer to the first occurrence of the
  *character c in the string s, or NULL if the character
  *is not found
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
				count++;
			j++;

		}

		i++;
	}
	return (count);
}
