#include "monty.h"
/**
 * add - adds top two elements of stack
 * @head: Passed head
 * @i: Passed line number
 */
void add(stack_t **head, unsigned int i)
{
	stack_t *new;
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", i);
		exit(EXIT_FAILURE);
	}
	new = *head;
	temp = new->n + new->next->n;
	pop(head, i);
	new = *head;
	new->n = temp;

}
/**
 * nop - adds top two elements of stack
 * @head: Passed head
 * @i: Passed line number
 */
void nop(stack_t **head, __attribute__((unused))unsigned int i)
{
	*head = *head;
}
