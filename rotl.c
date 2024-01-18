#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: stack head
 * @counter: line_number (unused)
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *last = *head;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		return;
	}

	(*head)->next->prev = NULL;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = *head;
	(*head)->next = NULL;
	(*head)->prev = last;
	*head = (*head)->next;
}
