#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type 'char'.
 * Return: 0
 */
int main(void)
{
		int i, e;

		i = 48;
		e = 48;

		while (e < 58)
		{
			i = 48;
			while (i < 58)
			{
				if (e != i && e < i)
				{
					putchar(e);
					putchar(i);
					if (i == 57 && e ==56)
					{
						break;
					}
					putchar(',');
					putchar('');
				}
				i++;
			}
		        e++;
		}
				
			        putchar('\n');
				return (0);
}
