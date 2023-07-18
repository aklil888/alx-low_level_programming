#include <stdio.h>


/**
 * main - prints the size of various types on the computer it is compiled and run on.
 * Return: Always 0.
 */


int main(void)


{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu bytr(s)\n", (unsigned long)sizeof(a));
	printf("size of a int: %lu bytr(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytr(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytr(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu bytr(s)\n", (unsigned long)sizeof(f));
	return (0)
}
