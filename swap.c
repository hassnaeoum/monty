#include "monty.h"

/**
 * _swap - chage between two nodes.
 * @stack: head
 * @line: num of line.
 */
void _swap(stack_t **stack, UINT line);
{
	int ptr;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE)
	}
	ptr = (stack)->ptr;
	(stack)->ptr = (stack)->next->ptr;
	(stack)->next->ptr = ptr
}
