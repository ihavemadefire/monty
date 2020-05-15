#include "monty.h"
/**
 * bringoutyourdead - validates inputs to program
 * @c: number of args passed from main
 */
void bringoutyourdead(int c)
{
	if (c != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
