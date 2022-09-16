#include<stdio.h>

/**
 * main - prints alphabet in lower except e and q
 * followed bty a new line
 * Return: Always 0 (Success);
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
