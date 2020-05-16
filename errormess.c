#include "monty.h"
/**
 * prterr1 - print error
 * @i: line number
 */
void prterr1(unsigned int i)
{
        fprintf(stderr, "L%u: usage: push integer\n", i);
        exit(EXIT_FAILURE);
}
/**
 * prterr2 - print error
 * @i: line number
 */
void prterr2(unsigned int i)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", i);
	exit(EXIT_FAILURE);
}
