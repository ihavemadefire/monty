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
		fprintf(stderr, "Error: malloc failed\n");
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
		fprintf(stderr, "L%u: can't pint, stack empty\n", i);
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

	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", i);
		exit(EXIT_FAILURE);
	}
	new = *head;
	/*If list len > 1*/
	if (new->next != NULL)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(new);
	}
	/**/
	else
	{
		*head = NULL;
		free(new);
	}
}
/**
 * swap - prints list
 * @head: head of list
 * @i: passed int
 */
void swap(stack_t **head, unsigned int i)
{
	stack_t *new;
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", i);
		exit(EXIT_FAILURE);
	}
	new = *head;
	temp = new->n;
	new->n = new->next->n;
	new->next->n = temp;
}
