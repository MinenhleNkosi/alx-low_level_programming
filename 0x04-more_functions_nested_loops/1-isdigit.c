#include "main.h"

/**
* _isdigit - function that verifies if a  character is a digit or not
* @c: character to be checked
* Return: returns 1 if it is uppercase , and 0 if not
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
