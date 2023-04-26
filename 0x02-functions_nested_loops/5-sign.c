#include "main.h"
/**
 * print_sign - determine if the input is posive
 * or negative or 0
 * @n: input nember as integr
 * Return: 1 if greter than zero -1 if
 * less than 0 and 0 if zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
