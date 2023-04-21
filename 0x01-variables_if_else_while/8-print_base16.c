#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	int d;

	ch = 'a';
	d = 0;
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(ch <= 'f') {
			putchar(ch);
			ch++;
		}
	putchar('\n');
	return (0);
}
