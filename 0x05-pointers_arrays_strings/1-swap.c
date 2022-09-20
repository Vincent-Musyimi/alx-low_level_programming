#include "main.h"
/**
 * swap_int - entry point
 *
 * @a: interger 1
 * @b: interger 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
