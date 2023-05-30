#include <stdio.h>

/**
 * main - return alphabets both lower and upper cases
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
char letter;

// Print lowercase alphabet
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

// Print uppercase alphabet
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}
