#include<stdio.h>
/**
 * main - Entry point
 * Description: print 0, 1, - 9
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n;

	for (n = 0; n < 9; n++)
	{
		putchar(n);

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
