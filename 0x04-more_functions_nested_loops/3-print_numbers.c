#include "main.h"
/**
 * print_numbers - prints number 0 to 9
 *
 * Retrun: void
 */
void Print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
