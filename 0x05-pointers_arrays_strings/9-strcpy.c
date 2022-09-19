#include "main.h"
/**
  **_strcpy - This function copies the string pointed to by src,
  *including the terminating null byte (\0),
  *to the buffer pointed to by dest.
  *@dest: first pointer argument
  *@src: second pointer argument
  *Return: Pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i != '\0'; i++)

		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);

}

