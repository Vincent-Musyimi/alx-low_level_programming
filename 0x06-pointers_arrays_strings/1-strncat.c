#include "main.h"
/**
 * _strncat - concanates but considers n input
 *
 * @dest: string to be appended
 * @src: string to concanate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dust_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
