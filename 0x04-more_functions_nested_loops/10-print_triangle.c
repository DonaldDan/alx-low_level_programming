#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 *@size: the size of the triangle
 *
 */

void print_triangle(int size)
{
	int i, a, b, j, k;

	/*draws a triangle with # */

	if (size > 0)
	{
		a = size - 1;
		b = size - 1;
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = a; k < size; k++)
			{
				_putchar('#');
			}
			b--;
			a = b;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
