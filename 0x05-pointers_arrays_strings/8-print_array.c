#include "holberton.h"
#include <stdio.h>
void print_array(int *a, int n)
{
printf("%p", a);
printf(", %p", a++);
printf(", %p", a++);
printf(", %p", a++);
printf("%p", a++);
}
