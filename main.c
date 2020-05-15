#include "monty.h"


/**
 * main - This funciton is a basic monty bytecode interpreter
 * @argc: number of passed arguments; should be 1
 * @argv: File passed to be parsed
 * Return: Exit status
 */

int main(int argc, char *argv[])
{
	stack_t *g_head;

	g_head = NULL;
	bringoutyourdead(argc);
	spam(argv[1], &g_head);
	weeweesebwian(g_head);
	return (EXIT_SUCCESS);
}
