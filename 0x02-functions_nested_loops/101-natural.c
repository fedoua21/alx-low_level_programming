#include <stdio.h>
/**
 *main - entry point
 *Return: always 0
*/
int main(void)
{
	int num, sum;

	for (num = 0; num <= 1024; num++)
	{
		if ((num % 5 == 0) || (num % 3 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

