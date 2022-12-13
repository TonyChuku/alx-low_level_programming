#include "main.h"

/**
 * print_alphabet_x10 - a function that prints x10 of the alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char count, lower;

	for (count = '0'; count <= '9'; count++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
	_putchar('\n');
	}
}
