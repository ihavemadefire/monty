#include "monty.h"
/**
 * spam - reads in file line by ine
 * @its: file name as pased from main
 * Return Char painter to op token
 */
char *spam(char *its)
{
	FILE *fp = fopen(its, "r");
	char buff[128];
	char *opr;

	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", its);
		exit(EXIT_FAILURE);
	}

	while (fgets(buff, sizeof(buff), fp) != NULL)
	{
		opr = strtok(buff, " ");
		printf("Operation :%s\n", opr);
	}
	fclose(fp);
}
