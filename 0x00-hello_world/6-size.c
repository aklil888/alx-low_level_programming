#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %lu bytr(s)\n", (unsigned long)sizeof(char));
	printf("size of a int: %lu bytr(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu bytr(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %lu bytr(s)\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %lu bytr(s)\n", (unsigned long)sizeof(float));
	return (0);
}
