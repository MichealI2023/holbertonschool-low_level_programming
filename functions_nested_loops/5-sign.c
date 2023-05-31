#include "main.h"
/**
 * print_sign - will print  + if positive and - if negative
 * @n: if 1 is +, if 0 is 0, if -1 is -
 * Return: 1 prints + if n>0,0 prints 0 if n=0, -1 prints - if n<0
 */
#include <stdio.h>

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1); /* Positive number */
}
else if (n < 0)
{
_putchar(45);
return (-1); /* Negative Number */
}
else
{
_putchar(48);
return (0); /* Zero*/
}
}
