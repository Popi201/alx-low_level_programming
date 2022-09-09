Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@Popi201 
candystarr1991
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x01-variables_if_else_while/102-print_comb5.c
@candystarr1991
candystarr1991 102-print_comb5.c
Latest commit 61ad945 on 5 Jun
 History
  1 contributor
  48 lines (46 sloc)  620 Bytes

#include <stdio.h>

  /**
   *  * main - Prints numbers between 00 to 99.
   *   *
   *    *  Return: Always 0 (Success)
   *     */
  int main(void)
{
	int i, e, g, h, op1, op2;

	i = e = g = h = 48;
	while (h < 58)
	{
			g = 48;
				while (g < 58)
						{
									e = 48;
											while (e < 58)
														{
																		i = 48;
																					while (i < 58)
																									{
																														op1 = (h * 10) + g;
																																		op2 = (e * 10) + i;
																																						if (op1 < op2)
																																											{
																																																	putchar(h);
																																																						putchar(g);
																																																											putchar(' ');
																																																																putchar(e);
																																																																					putchar(i);
																																																																										if (h == 57 && g == 56 && e == 57 && i == 57)
																																																																																	break;
																																																																															putchar(',');
																																																																																				putchar(' ');
																																																																																								}
																																										i++;
																																													}
																								e++;
																										}
													g++;
														}
					h++;
	}
	putchar('\n');
	return (0);
}
