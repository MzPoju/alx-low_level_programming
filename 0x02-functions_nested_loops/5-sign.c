#include "main.h"

/**
 * print_sign - to print sign
 * @n: number to check
 * Return: 1 is greater than 0, -1 is less than 0 and 0 is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
