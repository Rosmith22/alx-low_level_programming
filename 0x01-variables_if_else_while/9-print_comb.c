#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
  * main - Entry point
  * Return: Always 0 (Success)
  */
/* betty style doc for function main goes there */
int main(void)
{
int a;
for (a = 48; a <= 57; a++)
{
	putchar(a);
	if (a < 57)
	{
		putchar(44);
		putchar(32);
	}
}
putchar(10);
return (0);
}
