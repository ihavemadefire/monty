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
		fprintf(stderr, "L%u: can't add, stack too short\n", i);
		exit(EXIT_FAILURE);
	}
	new = *head;
	temp = new->n / new->next->n;
	pop(head, i);
	new = *head;
	new->n = temp;
}
