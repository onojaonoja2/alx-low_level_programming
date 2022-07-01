#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'a')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
