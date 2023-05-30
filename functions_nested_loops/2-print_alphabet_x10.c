#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10 /n after each
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
