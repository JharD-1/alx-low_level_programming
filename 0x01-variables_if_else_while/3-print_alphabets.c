#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char upp;

	for (upp = "A"; upp <= "Z"; upp++)
		putchar(upp);
		putchar("\n");
	return (0);
}
