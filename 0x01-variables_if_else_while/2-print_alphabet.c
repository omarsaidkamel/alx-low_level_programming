#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	int a;
	for (a = 0; a < 26; a++)
		putchar(c + a);
	return (0);
}
