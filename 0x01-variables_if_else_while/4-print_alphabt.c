#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
			ch++;
		}
		else
			ch++;
	}
	putchar('\n');
	return (0);
}
