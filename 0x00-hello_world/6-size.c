#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 int main(void)
{
	char c;
	int a;
	long int 1a;
	long long int 11a; 
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
 	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(1a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lla));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
