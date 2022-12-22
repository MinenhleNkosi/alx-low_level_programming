#include "main.h"

/**
* swap_int - swap two integers
* @a: first integer to be checked
* @b: second integer to be checked
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
