#include <unistd.h>
#include <string.h>
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
			_putchar(str[ch]);
	}
		_putchar('\n');
		return (0);
}
