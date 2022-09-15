#include "main.h"

/**
 *  * print_alphabet_x10 - a function that prints 10 times the alphabet
 *   *
 *    * Return: Always 0 (Success)
 *     */
void print_alphabet_x10(void)
{
		int x, y;

			y = 0;

				while (y < 10)
						{
									for (x = 'a'; x <= 'z'; x++)
												{
																_putchar(x);
																		}
											y++;
													_putchar('\n');
														}
}
