#include "monty.h"
/**
* rotl - Rotates ll to the left
* @head: passed head
* @i: passed line number
*/
void rotl(stack_t **head, __attribute__((unused)) unsigned int i)
{
	stack_t *new;
	stack_t *temp;

	new = *head;
	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->next = NULL;
	new->prev = temp;
}
/**
 * rotr - Rotates ll to the right
 * @head: passed head
 * @i: passed line number
 */
void rotr(stack_t **head, __attribute__((unused)) unsigned int i)
{
	stack_t *new;
	stack_t *temp;

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new = temp;
	temp->prev->next = NULL;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
}
