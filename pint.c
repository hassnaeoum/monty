#include "monty.h"

/**
 * _pint - display the top value.
 * @stack: ptr to stack
 * @l_n: num of the line
 */

void _pint(stack_t **stack, UINT l_n);
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
