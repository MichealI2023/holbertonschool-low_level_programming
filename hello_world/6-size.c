#include<stdio.h>
int main(void)
/*
 * main - print Statement
 *
 * Return: Always 0 (Success)
 */
{
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu byte\n", sizeof(charType));

return (0);
}
