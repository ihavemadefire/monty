#include "monty.h"
/**
 * spam - reads in file line by ine
 * @head: list head
 * @its: file name as pased from main
 * Return Char painter to op token
 */
void spam(char *its, stack_t **head)
{
	FILE *fp = fopen(its, "r");
	char buff[128];
	char *opr;
	char *num;
	int numint;
	unsigned int i = 1;

	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", its);
		exit(EXIT_FAILURE);
	}
	/*after opening this loop iterates and reads each line*/
	while (fgets(buff, sizeof(buff), fp) != NULL)
	{
		opr = strtok(buff, " ");
		if (*opr != 10 && *opr != 35)
		{
			if (strcmp(opr, "push") == 0)
			{
				num = strtok(NULL, " ");
				/*validate not null and is int*/
				if (*num == 10)
					prterr1(i);
				camelot(num, i);
				remove_endOfLine(num);
				numint = atoi(num);
				push(head, numint);
			}
			else
			{
				remove_endOfLine(opr);
				get_command(head, opr, i);
			}
		}
		i++;
	}
	fclose(fp);
}
/**
 * get_command - bounces line parse off of struct
 * @i: payload
 * @opr: parsed operator name
 * @head: head pointer
 */
void get_command(stack_t **head, char *opr, unsigned int i)
{
	int j = 0;
	instruction_t fd[] = {
		{"pint", pint},
		{"pall", pall},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", dive},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};
	while (fd[j].opcode != NULL)
	{
		if (strcmp(opr, fd[j].opcode) == 0)
		{
			fd[j].f(head, i);
			break;
		}
		j++;
	}
	if (fd[j].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", i, opr);
		exit(EXIT_FAILURE);
	}
}
/**
 * remove_endOfLine - changes ending '\n' to '\0'
 * @line: holds the args ending in '\n'
 *
 * Return: void
 */
void remove_endOfLine(char *line)
{
	int i = 0;

	while (line[i] != '\n')
		i++;
	line[i] = '\0';
}
