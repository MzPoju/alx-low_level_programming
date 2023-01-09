#include "main.h"

/**
 * _islower - checks for lowercase charcter
 * @c: the chracter to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
