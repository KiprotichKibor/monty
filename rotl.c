#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: stack head
 * @counter: line_number (unused)
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		return;
	}

	(*head)->next->prev = NULL;
	stack_t *last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = *head;
	(*head)->next = NULL;
	(*head)->prev = last;
	*head = (*head)->next;
}
