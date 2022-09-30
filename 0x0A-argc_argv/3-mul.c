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
	int i, mul = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc < 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			mul = i * mul;
			printf("%d", mul);
		}
	}
	return (0);
}
