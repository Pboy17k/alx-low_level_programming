#include<stdio.h>
/**
 * main - Entry point
 * Description: print 0, 1, - 9
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		if (n != 59)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
