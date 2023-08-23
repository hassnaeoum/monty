#include "monty.h"

/**
 * _swap - change between two nodes.
 * @stack: head
 * @line: num of line.
 */
void _swap(stack_t **stack, unsigned int line)
{
	int n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = n;
}
