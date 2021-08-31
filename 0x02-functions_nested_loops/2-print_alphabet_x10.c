#include<stdio.h>

void print_alphabet_x10(void);
int main(void)
{

print_alphabet_x10();
return(0);
}
void print_alphabet_x10(void)
{
int j;
char i='a';
for (j=0; j<10; j++)
{
	while (i<='z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	i='a';
	
}
}

