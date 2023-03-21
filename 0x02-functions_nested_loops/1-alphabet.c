#include "main.h"

/**
 * main - most important part of the program
 *
 * Return: always 0 (Success)
 */

int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
