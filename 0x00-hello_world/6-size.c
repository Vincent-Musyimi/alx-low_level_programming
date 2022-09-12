#include <stdio.h>
/**
 * main - print the string in the print function
 *
 * Description: Printing the size o various comp types
 * this program prints the prints on comp sizes
 * Return: 0
 */
int main(void)
{
	printf("Print size of char: %d byte(s)\n", sizeof(char));
	printf("print size of int: %d byte(s)\n", sizeof(int));
	printf("Print size of long: %d byte(s)\n", sizeof(long int));
	printf("Print size of long long: %d byte(s)\n", sizeof(long long int));
	printf("Print size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
