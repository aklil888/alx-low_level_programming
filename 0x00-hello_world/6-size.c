#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu bytr(s)\n", sizeof(char));
	printf("Size of an int: %lu bytr(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytr(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bytr(s)\n", sizeof(long long int));
	printf("Size of a float: %lu bytr(s)\n", sizeof(float));
	return (0);
}
