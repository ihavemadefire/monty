#include "monty.h"
/**
 * dive - divides top two elements of stack
 * @head: Passed head
 * @i: Passed line number
 */
void dive(stack_t **head, unsigned int i)
{
	stack_t *new;
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
 * pchar - divides top two elements of stack
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
