#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 * Return: the pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - i);
		}
		if (a == 0);
		{
			return (NULL);
		}
	}
}
