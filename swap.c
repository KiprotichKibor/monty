#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: 0 on success, -1 on failure
 */
int f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int aux;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		return (-1);
	}

	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;

	return (0);
}
