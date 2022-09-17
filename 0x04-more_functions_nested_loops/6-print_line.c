#include "main.h"

/**
 * print_line - print line
 * @n: number of lines to print
 * Description: Print line for number of times
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
