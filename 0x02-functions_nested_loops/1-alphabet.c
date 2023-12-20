#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
char *a = "abcdefghijklmnopqrstuvwxyz";
size_t i;

for (i = 0; i < strlen(a); i++)
_putchar(a[i]);
_putchar('\n');

}
