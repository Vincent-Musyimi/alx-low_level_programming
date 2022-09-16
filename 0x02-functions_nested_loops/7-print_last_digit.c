#include "main.h"

/**
 * print_last_digit - printing the lst digit
 *
 * Int n -argument for function
 * @n - argument for function
 * Return: 0
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
