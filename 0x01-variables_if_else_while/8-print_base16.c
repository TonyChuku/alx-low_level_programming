#include <stdio.h>

/**
 * main - Receives no arguement
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numb;
	char lower;

	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);
	putchar('\n');

	return (0);
}

