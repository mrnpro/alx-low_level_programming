#include "holberton.h"
/**
*
* _isalpha - tells us if the integer given by the caller is matchs with
*the alphabet ASCII value
*
*Return: returns the decision
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		if (c >= 97 && c <= 122)
			return (1);
	}
	else
		return (0);
}
