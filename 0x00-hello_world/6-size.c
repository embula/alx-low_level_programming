#include <stdio.h>

/**
 *  * main -> Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
		int x;
			long int y;
				long long int z;
					float n;
						char m;
							
							printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
								printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
									printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
										printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
											printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(n));
												return (0);
}
