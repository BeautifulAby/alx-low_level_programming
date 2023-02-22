#include "main.h"
/**
 * print_alphabet_x10 - printlower alpha ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
char a;
int i;

	for (i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			putchar(a);
		putchar('\n');
	}
}
