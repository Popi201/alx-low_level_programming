#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet.
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
		char x;

		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}	
		putchar('\n');
		return (0);

}
