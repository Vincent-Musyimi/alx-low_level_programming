#include "main.h"

/**
 * islower(int c) - checks code
 *
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
