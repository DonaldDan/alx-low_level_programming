#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char to check the length of the string
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0; /*start of the count from 0*/

	for (; s++;)
		a++;
	return (a);
}
