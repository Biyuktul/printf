#include "main.h"
/**
 * _putnumber - function that prints numbers
 * @n: number to be printed
 * @i: traversing variable.
 * @c: counter for printed numbers.
 * Return: traversing variable + 1.
 */
int _putnumber(long n, int i, int *c)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*c += 11;
		return (i + 1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		*c += 1;
		n = -n;
	}
	if (n / 10 != 0)
		_putnumber(n / 10, i, c);
	n = (n % 10) + '0';
	write(1, &n, 1);
		*c += 1;
	return (i + 1);
}
