#include "main.h"
/**
 * _strcat - append src to dest string
 *
 * @dest - string that will append
 * @src - string that will concanate
 * Return: dest
 */
char *_strcat(char *dest, char*src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
