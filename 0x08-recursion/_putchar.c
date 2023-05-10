#include <unistd.h>
/**
 * _putchar  - write the caracter c to stdout
 * @c: the caracter to print
 * Return: On success 1
 * On error, -1 is returned and errone is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
