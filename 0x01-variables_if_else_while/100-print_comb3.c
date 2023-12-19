#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int number;

for (number = 1; number < 90; number++)
{
putchar('0' + (number / 10));
putchar('0' + (number % 10));
if (number != 89)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
