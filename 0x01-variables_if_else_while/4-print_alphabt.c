#include <stdio.h>

/**
 * main - most important part of program
 * Return: Always return 0 (Success)
*/

int main(void)
{
		char c;

		c = 'a';
		while
			(c <= 'z') {
				if ((c != 'q' && c != 'e') && c <= 'z')
					putchar(c);
				c++;
			}
		putchar('\n');
		return (0);
}
