#include "main.h"
/**
 * swap_int - swap tow values
 * @a: input 1
 * @b: input 2
 * Return: nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
