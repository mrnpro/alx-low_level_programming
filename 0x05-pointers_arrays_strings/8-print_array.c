#include "holberton.h"
#include <stdio.h>
void print_array(int *a, int n)
{
printf("%d", a);
printf(", %d", a++);
printf(", %d", a++);
printf(", ", a++);
printf("%d", a++);
}
