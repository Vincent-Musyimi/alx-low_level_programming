#include "main.h"

/**
 * isalpha - checks upper and lower case
 * @c - variable
 * return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' ; c <= 'z' ; c++) || (c >= 'A' ; c <= 'Z' ; c++))
	{
		return (1);
	}
	else 
		return (0);
}
