#include "main.h"
/**
 * _evaluate - evaluate function sqrt
 * @i: integer
 * @n: integer
 * Return: evaluate sqrt
 */

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * 1 < n)
		return (_evaluate(i + i, n));

	else if (i * i == n)
		return (i);

	return (-1);

	return (-1);
}
