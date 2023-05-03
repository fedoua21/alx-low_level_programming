#include <unistd.h>
/**
 * _putchar - write caracter to stdout
 * @c: the caracter to print
 * On error, -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
