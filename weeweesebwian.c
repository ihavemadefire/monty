#include "monty.h"
/**
 * weeweesebwian - Frees list at end of function
 * @head: passed head
 */
void weeweesebwian(stack_t *head)
{
	stack_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
