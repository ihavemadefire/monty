#include "monty.h"
/**
 * camelot - looks for non-numberic characters in arg
 * @str: string to be parsed
 * @i: passed line number
 */
void camelot(char *str, unsigned int i)
{
	int j = 0;

	if (str[0] == 45)
		j++;
	while (str[j] != '\n')
	{
		if (str[j] != ' ')
		{
			break;
		}
		else if (str[j] < 48 || str[j] > 57)
		{
			prterr1(i);
		}
		j++;
	}
}
