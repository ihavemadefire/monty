#include "monty.h"
/**
 * main - This funciton is a basic monty bytecode interpreter
 * @argc: number of passed arguments; should be 1
 * @argv: File passed to be parsed
 * Return: Exit status
 */

int main(int argc, char *argv[])
{
	bringoutyourdead(argc);
	printf("%s\n", argv[1]);
	return(0);
}
