#include "main.h"

/**
 * check_formater - function that checks formating character.
 * @str: Character to be checked.
 * @arg: pointer to the coresponding argument.
 * @i: varible to traverse the string.
 * @done: variable to count printed characters (count number of byte printed).
 * Return: whatever _putchar or _puts Returning.
 */

int check_formater(char str, va_list *arg, int i, int *done)
{
	if (str == 'c')
		return (_putchar(va_arg(*arg, int), i, done));
	else if (str == 's')
		return (_puts(va_arg(*arg, char*), i, done));
	else if (str == 'i')
		return (_putnumber(va_arg(*arg, int), i, c));
	else if (str == 'd')
		return (_putnumber(va_arg(*arg, int), i, c));
	else
		return (_putchar(str, i, done));

}
