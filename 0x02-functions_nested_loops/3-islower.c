#include "main.h"
/**
 * _islower - shows 1 if the output is a lowercase
 *  caracter otherwise shows 0
 *  @c:the caracter in ASCII code
 *  Return: 1 for the lowercase caracter 0 for the rest
*/
int _islower(int c)
{
	if (c >= 97 && c >= 122)

		return (1);
	else
		return (0);
	_putchar('\n');
}
