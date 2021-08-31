#include "holberton.h"

void print_alphabet(void);
int main(void)
{
print_alphabet();
return(0);
}
void print_alphabet(void)

{
char i='a';
while (i<='z')
{
putchar(i);
i++;
}
putchar('\n');
}
