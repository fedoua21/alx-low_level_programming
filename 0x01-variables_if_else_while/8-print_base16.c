#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
*/
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
