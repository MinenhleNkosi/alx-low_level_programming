#include <stdio.h>

/**
*main - The main method will print out what is on the puts function
* Description: using the main function
* Return: 0
*/

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar('\n');
	return (0);
}
