#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *a = "abcdefghijklmnopqrstuvwxyz";
	size_t i;

	for (i = 0; i < strlen(a); i++)
		putchar(a[i]);
	putchar('\n');
	return (0);
}
