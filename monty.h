#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define UINT unsigned int

extern int PUSH_VALUE;

typedef struct StackNode
{
    int value;
    struct StackNode *prev;
    struct StackNode *next;
} StackNode;

typedef struct Instruction
{
    char *opcode;
    void (*func)(StackNode **stack, UINT line_number);
} Instruction;

void printAll(StackNode **stack, UINT line_number);
void pushValue(StackNode **stack, UINT line_number);
void doNothing(StackNode **stack, UINT line);
void swapValues(StackNode **stack, UINT line);
void addValues(StackNode **stack, UINT line);
void popStack(StackNode **stack, UINT line);
void printTop(StackNode **stack, UINT line_num);
void subtractValues(StackNode **stack, UINT line);

void executeInstruction(char *opcode, StackNode **stack, int line_number);
int isInteger(char *str);
void handlePushInstruction(char *opcode, StackNode **stack, int line_number);
void freeStackMemory(StackNode *top);
int isComment(char *token, int line_count);

#endif
