#include "monty.h"
/**
 * dive - divides top two elements of stack
 * @head: Passed head
 * @i: Passed line number
 */
void dive(stack_t **head, unsigned int i)
{
	stack_t *new = NULL;
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", i);
		exit(EXIT_FAILURE);
	}
	new = *head;
	if (new->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", i);
		exit(EXIT_FAILURE);
	}
	temp = new->next->n / new->n;
	pop(head, i);
	new = *head;
	new->n = temp;
}
/**
 * pchar - prints char at top of stack
 * @head: Passed head
 * @i: Passed line number
 */
void pchar(stack_t **head, unsigned int i)
{
	stack_t *new;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", i);
		exit(EXIT_FAILURE);
	}
	new = *head;
	if (new->n >= 0 && new->n <= 127)
	{
		printf("%c\n", new->n);
	}
	else
	{
		prterr2(i);
	}
}
/**
 * pstr -  aggregates chars into string and prints them
 * @head: Passed head
 * @i: Passed line number
 */
void pstr(stack_t **head, __attribute__((unused))unsigned int i)
{
	stack_t *new;
	char buff[128];
	int j = 0;

	new = *head;
	while (new)
	{
		if (new->n <= 0 || new->n >= 127  || new->n == 0)
		{
			break;
		}
		buff[j] = new->n;
		j++;
		new = new->next;
	}
	buff[j] = '\n';
	printf("%s", buff);
}
