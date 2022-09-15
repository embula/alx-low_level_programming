#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _put = "_putchar";

	while(_put) 
	{
		_putchar(_put);
		_put++;
	}
	_putchar('\n');

	return (0);
}
