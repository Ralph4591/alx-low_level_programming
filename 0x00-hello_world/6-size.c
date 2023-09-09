#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	printf("size of double: %zu byte(s)\n", sizeof(double));
	printf("size of long double: %zu byte(s)\n", sizeof(long double));
	printf("size of pointer: %zu byte(s)\n", sizeof(void *));

	return (0);
}
