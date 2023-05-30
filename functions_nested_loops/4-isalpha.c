#include "main.h"
/**
 * _isalpha - print alphabet upper and lowercase
 * @c: variable to be checked
 * Return: 1 if c is a letter, lowercase or uppercase; 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1); /* Character is a letter */
else
return (0); /* Character is not a letter */
}

