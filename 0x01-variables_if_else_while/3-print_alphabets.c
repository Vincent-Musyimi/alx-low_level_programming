#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Alphabets in both caps
 * this program prints alphabets
 * Return: 0
 */
int main(void)
{
	char ai;

	for (ai = 'a' ; ai <= 'z' ; ai++)
	{
		putchar(ai);
	}
	for (ai = 'A' ; ai <= 'Z' ; ai++)
	{
		putchar(ai);
	}
	putchar('\n');
	return (0);
}
