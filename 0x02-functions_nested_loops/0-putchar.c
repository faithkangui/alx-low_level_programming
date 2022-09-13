#include <stdio.h>
#include "main.h"
/**
 *main - entry point
 *
 *Return: Always 0.
 */
int main(void)
{
	int ch;

	char str[] = "_putchar";
	{
		for (ch = 0; ch < strlen(str); ch++)
			putchar(str[ch]);
	}
		putchar('\n');
		return (0);
}
