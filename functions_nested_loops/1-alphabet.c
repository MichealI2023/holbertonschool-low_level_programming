#include "main.h"
/**
 * print_alphabet - prints alphabet
 * @k - computed varible
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}

_putchar('\n');
}
