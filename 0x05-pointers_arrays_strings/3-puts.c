#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
<<<<<<< HEAD
	_putchar('\n'):
=======
	_putchar('\n');
>>>>>>> 3ee552cfa3a95de4d672690bd0e2b279d7c089c1
}
