#include "holberton.h"
/**
*
* _isalpha - tells us if the integer given by the caller is matchs with the alphabet ASCII value
*@c: the char converted to integer
*Return: returns the decision
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
