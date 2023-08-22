include "monty.h"

/**

monty_main - main function for Monty interpreter

@argc: arg count

@argv: arg vector

Return: int
*/
int monty_main(int argc, char **argv)
{
FILE *file;
stack_t *stack = NULL;
char buffer[1024];
int line_num = 0;
char *opcode;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
if (!file)
{
fprintf(stderr, "Error: Unable to open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

while (fgets(buffer, 1024, file))
{
line_num++;
instr = strtok(buffer, " \t\n");
if (is_comment(instr, line_num) == 1)
continue;
if (instr)
execute_instruction(instr, &stack, line_num);
}

fclose(file);
free_stack(stack);
return 0;
}
