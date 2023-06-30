#include <stdio.h>
/**
 * main - Entry point
 * Description: "Print single digit characters but only use putchar"
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	}
	putchar('\n');
	return (0);
}
