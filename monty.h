#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define UINT unsigned int

extern int PUSH_VALUE;

/**
 * struct stack_c - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_c
{
    int n;
    struct stack_c *prev;
    struct stack_c *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @func: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct Instruction
{
    char *opcode;
    void (*func)(stack_t **stack, UINT line_number);
} Instruction_t;

void push(stack_t **stack, UINT line_number);
void pall(stack_t **stack, UINT line_number);
void _nop(stack_t **stack, UINT line);
void _swap(stack_t **stack, UINT line);
void _add(stack_t **stack, UINT line);
void pop_stack(stack_t **stack, UINT line);
void _pint(stack_t **stack, UINT line_number);
void sub(stack_t **stack, UINT line);

void handle_opcode(char *opcode, stack_t **stack, int line_number);
int check_int(char *str);
void pushing(char *opcode, stack_t **stack, int line_number);
void free_stack(stack_t *top);
int is_comm(char *token, int line_count);

#endif
