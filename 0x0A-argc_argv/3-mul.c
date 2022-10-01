#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		int j = atoi (*(argv + i));

		mul = j * mul;
	}
	printf("%d\n", mul);
	return (0);
}
