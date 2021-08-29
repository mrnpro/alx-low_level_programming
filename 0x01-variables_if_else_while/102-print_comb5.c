#include<stdio.h>

int main(void)
{
	int i,count=0;
	for (i=0; i<100; i++)
	{
		if(i<10)
		{
			putchar(count);
			putchar(i);
		}
		else 
			putchar(i);
	}
	putchar('\n');
	return(0);
}
