#include "main.h"

/**
 * main - Print _putchar
 * Return: Always 0
 */
int main(void)
{

char muza[] = "_putchar";

size_t i;

for (i = 0; i < strlen(muza); i++)
{
_putchar (muza[i]);
}
_putchar ('\n');
return (0);
}

