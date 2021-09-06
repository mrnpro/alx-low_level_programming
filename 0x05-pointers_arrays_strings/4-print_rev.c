#include "holberton.h"
#include "string.h"
void print_rev(char *s)
{
int i = 0;
int ch = strlen(s);
while(ch!=0)
{
_putchar(*s+ch);
ch--;
}
}
