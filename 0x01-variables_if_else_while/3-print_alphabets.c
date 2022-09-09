#include <stdio.h>
#include <stdlib.h>
/**
 *  main - putchar function to get lower and upper case alphabets
 *
 *  Return: 0 Always (Success)
 */
int main(void)
{
		char x;
		char y;

	        x = 'a';
		while (x <= 'z')
		{
			putchar(x);
			x++;
		}
		y = 'A';
		while (y <= 'Z')
		{
			putchar(y);
			y++;
		}
		putchar('\n');
		return (0);
}
