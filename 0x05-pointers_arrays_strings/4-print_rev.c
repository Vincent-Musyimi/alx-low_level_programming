#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string
 *
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + lens));
	putchar(10);
}
