#include<stdio.h>
/**
 * main - Printing alphabets in lowercase, uppercase \n
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char xy
	
	for (xy = 'a' ; xy <= 'z' ; xy++)
	{
	putchar(xy);
	}
	for (xy = 'A' ; xy <= 'Z' ; xy++)
	{
	putchar(xy);
	}
	putchar('\n');
	return (0);
}
