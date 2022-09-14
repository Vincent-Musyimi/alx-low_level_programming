#include <stdio.h>

/**
 * main - entry point
 * 
 * Description: all numbers of base 16
 * printin numbers in lower case
 * Return: 0;
 */
int main(void)
{
	char c;
	
	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
