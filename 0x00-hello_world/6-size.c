#include <stdio.h>
/**
 *main -Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char:  %zu byte(s)\n", sizeof(char Type));
	printf("Size of an int:  %zu byte(s)\n", sizeof(int Type));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int Type));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long Type));
	printf("Size of a float: %zu byte(s)\n", sizeof(float Type));
	return (0);
}
