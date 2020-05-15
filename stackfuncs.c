#include "monty.h"
/**
 * push - pushes an element to the list
 * @head: head of list
 * @i: passed int
 */
void push(stack_t **head, int i)
{
	stack_t *new;
	int n = i;

	new = (stack_t *)malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new->prev = NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		new->next->prev = new;
	}
	*head = new;
}
/**
 * pall - prints list
 * @head: head of list
 * @i: passed int
 */
void pall(stack_t **head, __attribute__((unused))unsigned int i)
{
	stack_t *new;

	new = *head;
	if (head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty", i);
	}
	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
	}
}
/**
 * pint - prints list
 * @head: head of list
 * @i: passed int
 */
void pint(stack_t **head, unsigned int i)
{
	stack_t *new;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty", i);
		exit(EXIT_FAILURE);
	}
	new = *head;
	{
		printf("%d\n", new->n);
		new = new->next;
	}
}
/**
 * pop - prints list
 * @head: head of list
 * @i: passed int
 */
void pop(stack_t **head, unsigned int i)
{
	stack_t *new;

	new = *head;
	if ((*head) == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack", i);
		exit(EXIT_FAILURE);
	}
	if (new->next == NULL)
	{
		free(new);
	}
	else
	{
		*head = new->next;
		new->next->prev = NULL;
		free(new);
	}
}
void swap(stack_t **head, unsigned int i)
{
	stack_t *new;
	int temp;

	new = *head;
	if (new->next == NULL || new->next->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short", i);
		exit(EXIT_FAILURE);
	}
	temp = new->n;
	new->n = new->next->n;
	new->next->n = temp;
}
