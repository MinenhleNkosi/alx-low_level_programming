#include "main.h"

/**
* print_alphabet - The main method will print out what is on the puts function
* Description: using the main function
* Return: 0
*/

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar (10);
}
