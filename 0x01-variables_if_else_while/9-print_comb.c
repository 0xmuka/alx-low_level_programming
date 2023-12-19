#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;
int number;

for (number = 0; number < 10; number++)
{
putchar('0' + number);
if (number != 9)
{
putchar(',');
putchar(' ');
}
}
return (0);
}

