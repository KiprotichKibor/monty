#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (!head || !*head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		clean_exit(*head);
	}

	h = *head;
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		clean_exit(*head);
	}

	printf("%c\n", h->n);
}
