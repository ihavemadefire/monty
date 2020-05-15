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

        new = *head;
        if (new->next == NULL || new->next->next == NULL)
        {
                fprintf(stderr, "L%u: can't swap, stack too short", i);
                exit(EXIT_FAILURE);
        }
	temp = new->n;
	new->next->prev = NULL;
	*head = new->next;
	free(new);
	new = *head;
	new->n = new->n + temp;

}
/**
 * nop - adds top two elements of stack
 * @head: Passed head
 * @i: Passed line number
 */
void nop(__attribute__((unused))stack_t **head, __attribute__((unused))unsigned int i)
{
}
