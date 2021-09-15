#include "main.h"

/**
 * _print_rev_recursion - reverses the characters.
 * @s: input string.
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
int i = strlen(s);
if (i != 0)
{
_putchar(s[i - 1]);
_print_rev_recursion(s - 1);
}

}
