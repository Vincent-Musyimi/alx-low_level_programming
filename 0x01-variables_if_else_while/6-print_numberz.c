#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using put char
 * this program prints "Numbers"
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0' ; i < '10' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
