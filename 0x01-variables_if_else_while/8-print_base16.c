#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	for (b = '0'; b <= '9'; b++)
	putchar(b);
	for (b = 'a'; b <= 'f'; b++)
	putchar(b);
	return (0);
}
