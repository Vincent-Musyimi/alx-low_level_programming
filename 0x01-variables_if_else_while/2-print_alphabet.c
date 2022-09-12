#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Alphabets
 * this program prints "Alphabets in small caps"
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'a' ;  al <= 'z' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
