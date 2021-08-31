#include "holberton.h"
/*
*_islower : sends the info
*
*Return : 1 if the letter is  lower otherwise everything sinks in 0
*/
int _islower(int c);
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return  (0);
}
