#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	char charType;
	double doubleType;
	long longType;
	float floatType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of double:%zu bytes\n", sizeof(doubleType));
	printf("Size of long:%zu bytes\n", sizeof(longType));
	printf("Size of float:%zu bytes\n", sizeof(floatType));

	return (0);
}
