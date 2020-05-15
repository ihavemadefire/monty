#include "monty.h"
/**
 * weeweesebwian - Frees list at end of function
 * @g_head: passed head
 */
void weeweesebwian(stack_t *head)
{
	stack_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
