#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

/**
 * push - Pushes an element onto the stack
 * @num: The integer value to be pushed
 *
 * Description:
 * This function pushes the given integer value onto the stack.
 * If the stack is full, it displays an error message and terminates the program.
 */
void push(int num)
{
    if (top == STACK_SIZE - 1)
    {
        fprintf(stderr, "Stack Overflow\n");
        exit(EXIT_FAILURE);
    }

    stack[++top] = num;
}
