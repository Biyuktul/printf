#include "main.h"

/**
 * _putchar - writes the character charac to stdout
 * @charac: The character to print
 * @i: a variable that is traversing the string.
 * @c: pointer to the printed character counter.
 * Return: traversing variable + 1.
 */
int	_putchar(int charac, int i, int *c)
{
	write(1, &charac, 1);
	*c += 1;
	return (i + 1);
}
