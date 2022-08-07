#include "main.h"

/**
 * _puts - function that writes a string character by character to stdout.
 * @str: pointer to the string.
 * @i: a variable that is traversing the string.
 * @c: printed character counter variable.
 * Return:  on success - traversing variable + 1.
 *		on failure - prints null.
 */
int _puts(char *str, int i, int *c)
{
	int count;

	count = 0;
	if (!str)
		return (NULL);
	while (str[count])
	{
		write(1, &str[count], 1);
		*c += 1;
		count++;
	}

	return (i + 1);
}
