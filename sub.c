#include "monty.h"

/**
 * f_sub - subtracts the top element from the second top element of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: 0 on success, -1 on failure
 */
int f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sub, nodes;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		return (-1);
	}

	aux = *head;
	sub = aux->next->n - aux->n;
	aux->next->n = sub;
	*head = aux->next;
	free(aux);

	return (0);
}
