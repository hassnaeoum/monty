#include "monty.h"
int CUSTOM_PUSH_VALUE;

/**

handle_opcode - interpret and execute the opcode
@opcode: the opcode to be interpreted
@stack: the head
@line_number: number of lines
*/
void handle_opcode(char *opcode, stack_t **stack, int line_number)
{
if (strcmp(opcode, "push") == 0)
pushing(opcode, stack, line_number);
else if (strcmp(opcode, "pall") == 0)
pall(stack, line_number);
else if (strcmp(opcode, "nop") == 0)
_nop(stack, line_number);
else if (strcmp(opcode, "swap") == 0)
_swap(stack, line_number);
else if (strcmp(opcode, "pop") == 0)
pop_stack(stack, line_number);
else if (strcmp(opcode, "pint") == 0)
_pint(stack, line_number);
else if (strcmp(opcode, "add") == 0)
_add(stack, line_number);
else if (strcmp(opcode, "sub") == 0)
sub(stack, line_number);
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
}
/**

is_numeric - check if a string contains only numeric characters

@str: the string to check

Return: return 0 or 1
*/
int is_numeric(char *str)
{
int i = 0;

if (str[0] == '-')
i++;
while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
{
return 1;
}
i++;
}
return 0;
}

/**

is_comment - check if a token is a comment
@token: the token to check
@line_count: line count
Return: return -1 if not a comment, otherwise 1
*/
int is_comment(char *token, int line_count)
{
if (token == NULL || token[0] == '#')
{
line_count++;
return 1;
}
return -1;
}
/**

release_stack - release the memory occupied by the stack

@top: the top of the stack
*/
void release_stack(stack_t *top)
{
stack_t *temp;

if (top == NULL)
return;

while (top)
{
temp = top;
top = top->next;
free(temp);
}

free(top);
}
