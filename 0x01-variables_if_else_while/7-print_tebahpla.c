#include<stdio.h>


/**
 * main - Entry point
 * Description: print a-z in reverse
 * Return: Always 0 (Success)
 */


int main(void)

{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
