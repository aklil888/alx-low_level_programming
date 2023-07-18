#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on.
 * Return: Always 0 
 */
int main(void)
{
	printf("size of a char: %zu bytr(s)\n", sizeof(char));
	printf("size of a int: %zu bytr(s)\n", sizeof(int));
	printf("size of a long int: %zu bytr(s)\n", sizeof(long int));
	printf("size of a long long int: %zu bytr(s)\n", sizeof(long long int));
	printf("size of a float: %zu bytr(s)\n", sizeof(float));
	return (0);
}
