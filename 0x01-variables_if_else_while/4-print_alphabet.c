#include <stdio.h>

/**
*main - The main method will print out what is on the puts function
* Description: using the main function
* Return: 0
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
