#include <unistd.h>
/**
 * _putchar - write the caracter c to stdout
 * @c: the caracter to print
 * Return: on success 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
