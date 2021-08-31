#include "holberton.h"

/**
*main function prints the name which is Holberton
*
*Return : returns 0
*/
int main(void)
{
char c[9] = {"Holberton"};
int i = 0;
while (i < 9)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return(0);
}
