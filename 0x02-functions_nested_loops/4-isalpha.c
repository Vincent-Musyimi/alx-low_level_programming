#include "main.h"

/**
 * _isalpha - checks upper and lower case
 * @c - variable
 * return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
