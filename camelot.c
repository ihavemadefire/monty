#include "monty.h"
/**
 * camelot - looks for non-numberic characters in arg
 * @str: string to be parsed
 * @i: passed line number
 */
void camelot(char *str, unsigned int i)
{
	int j;

	for (j = 0; str[j] != '\n'; j++)
	{
		if (str[j] < 48 || str[j] > 57)
		{
			prterr1(i);
		}
	}
}
