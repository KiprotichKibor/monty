#include "monty.h"

/**
 * f_pint - prints the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		clean_exit(*head);
	}

	printf("%d\n", (*head)->n);
}
