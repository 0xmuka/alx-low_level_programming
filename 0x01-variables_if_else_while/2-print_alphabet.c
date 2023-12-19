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
	long unsigned int i;

	for (i = 0; i < strlen(a); i++)
		putchar(a[i]);

	return (0);
}
