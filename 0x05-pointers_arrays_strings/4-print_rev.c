#include "holberton.h"
#include "stdio.h"
void print_rev(char *s)
{
int i = 0;
int ch = strlen(s);
while(ch!=0)
{
_putschar(s+ch);
ch--;
}
}
