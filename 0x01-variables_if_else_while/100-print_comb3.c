#include<stdio.h>
int main(void)
{
	 int i=48,j=0,c=48;
	
	 a:putchar(c);
	 putchar(i);
	 putchar(',');
	 putchar(' ');
	 if(i<=57)
	 {
	 if(c == 56 && i == 57)
	 {
	 i=48;
	 c=49;
	 goto a;
	 }
	 else{
	 c++;
	 i++;
	 goto a;
	 }
	 }

}
