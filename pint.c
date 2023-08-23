#include "monty.h"

/**
 * _pint - display the top value.
 * @stack: ptr to stack
 * @line_number: num of the line
 */

void _pint(stack_t **stack, unsigned int line_number)
{

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
