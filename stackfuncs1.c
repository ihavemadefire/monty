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
 * nop - does nothing
 * @head: Passed head
 * @i: Passed line number
 */
void nop(stack_t **head, __attribute__((unused))unsigned int i)
{
	*head = *head;
}
/**
 * sub - subtracts top two elements of stack
 * @head: Passed head
 * @i: Passed line number
 */
void sub(stack_t **head, unsigned int i)
{
	stack_t *new;
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", i);
		exit(EXIT_FAILURE);
	}
	new = *head;
	temp = new->n - new->next->n;
	pop(head, i);
	new = *head;
	new->n = temp;
}
/**
 * mul - multiples top two elements of stack
 * @head: Passed head
 * @i: Passed line number
 */
void mul(stack_t **head, unsigned int i)
{
	stack_t *new;
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", i);
		exit(EXIT_FAILURE);
	}
	new = *head;
	temp = new->n * new->next->n;
	pop(head, i);
	new = *head;
	new->n = temp;
}
/**
 * mod - moduluses top two elements of stack
 * @head: Passed head
 * @i: Passed line number
 */
void mod(stack_t **head, unsigned int i)
{
	stack_t *new;
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", i);
		exit(EXIT_FAILURE);
	}
	new = *head;
	if (new->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", i);
		exit(EXIT_FAILURE);
	}
	temp = new->next->n % new->n;
	pop(head, i);
	new = *head;
	new->n = temp;
}
