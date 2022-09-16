#include "main.h"

/**
 * islower - checks code
 *
 * Int c - argument to check the function
 * @c - argument to check the function
 * Description: checki lower than int c
 * Return: 0;
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
