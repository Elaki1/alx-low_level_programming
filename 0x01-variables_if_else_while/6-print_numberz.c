#include<stdio.h>


/**
 * main - Entry point
 * Description: print 0-9 using putchar
 * while using int variable
 * Return: Always 0 (Success)
 */


int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
