#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter: line_number (unused)
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *last = *head;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		return;
	}

	while (last->next)
	{
		last = last->next;
	}

	if (*head != last)
	{
		last->prev->next = NULL;
		last->next = *head;
		last->prev = NULL;
		(*head)->prev = last;
		*head = last;
	}
}
