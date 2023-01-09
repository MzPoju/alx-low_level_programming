#include "main.h"

/**
 * *_strncat - concatenates n ytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of strings to concanate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, unsigned int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
