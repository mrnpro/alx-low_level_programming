#include "holberton."
void print_rev(char *s)
{
int i = 0;
int ch = strlen(s);
while(ch!=0)
{
puts(s+ch);
ch--;
}
}
