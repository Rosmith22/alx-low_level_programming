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
}
for (a = 97; a <= 102; a++)
{
	putchar(a);
}
putchar(10);
return (0);
}
