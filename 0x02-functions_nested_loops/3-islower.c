#include "main.h"

/**
 * islower - checks code
 *
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
