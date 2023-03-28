#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int index = 0;
	unsigned int no = 0;
	int min = 1;
	int mx = 0;

	while (s[index])
	{
		if (s[index] == 45)
		{
			min *= -1;
		}

		while (s[index] >= 48 && s[index] <= 57)
		{
			mx = 1;
			no = (no * 10) + (s[index] - '0');
			index++;
		}

		if (mx == 1)
		{
			break;
		}

		index++;
	}

	no *= min;
	return (no);
}
