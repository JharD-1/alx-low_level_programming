#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char lt = "A";

	for (lt = "A"; lt <= "Z"; lt++)
		putchar(lt);
	return (0);
}
