#include <stdio.h>

/**
 * main - is the entry point of the code
 * 
 * Decreption: Use "sizeof" function to get size of type
 * Return: Always(0)
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

	printf("Size of a char: %lu byte(s)",sizeof(a));
	printf("Size of a int: %lu byte(s)",sizeof(b));
	printf("Size of a long int: %lu byte(s)",sizeof(c));
	printf("Size of a long long: %lu byte(s)",sizeof(d));
	printf("Size of a float: %lu byte(s)",sizeof(f));
	return (0);
}
