#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing alphabets
 * this program "Prints all except q&e"
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
