#include <stdio.h>
/**
 * main - Entry point
 * Description - "Print all single digit numbers of base 10 starting from 0"
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
