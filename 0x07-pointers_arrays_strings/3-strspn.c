#include "main.h"
/**
 * _strspn - get a lenght of prefix substring
 * @s: string
 * @accept: byte
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\n'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}
	return (itr);
}
