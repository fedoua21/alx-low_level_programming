#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}