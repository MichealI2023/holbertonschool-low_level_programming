#include "main.h"
/**
 * _islower - checks for a lower case character
 * @c: varible being tested
 * Return: 1 if c is lowercase , 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1); /*c is lowercase */
}
else
{
return (0); /* c is not lowercasei */
}
}
