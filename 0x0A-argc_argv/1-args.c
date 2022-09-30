#include "main.h"
/**
 * main - prints number of argument passed
 * @argc: an int
 * @argv: an array
 *
 * Return: int
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
