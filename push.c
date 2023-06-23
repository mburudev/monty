#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

/**
 * push - Pushes an element onto the stack
 * @num: The integer value to be pushed
 */
void push(int num)
{
    if (top == STACK_SIZE - 1)
    {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }

    stack[++top] = num;
}
