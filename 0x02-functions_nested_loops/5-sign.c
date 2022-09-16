#include "main.h"

/**
 * print_sign - function to
 *
 * Int n: argument to check the function
 * @n: argument to check the function
 * Return: 0;
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
