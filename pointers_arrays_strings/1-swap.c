#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two intergers.
 * @a: The first interger to be swapped
 * @b: the second interger to be swapped.
 *
 * Return: nothing
 */
void swap_int(int *a, nint *b)
/* the function that swaps the values of two interger. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
