#include "main.h"
/**
 * _isalpha - shos 1 if the output is a letter other case shows 0
 * @c: the caracter in ASCII code
 * Return: 1 for letters 0 for the rest
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
