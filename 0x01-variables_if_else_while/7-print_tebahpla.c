#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing letters in reverse
 * Program prints "z" to "a"
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
