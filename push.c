#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

extern void push(int stack[], int *top, int num);

void push(int stack[], int *top, int num)
{
    if (*top == STACK_SIZE - 1)
    {
        fprintf(stderr, "Stack overflow\n");
        exit(EXIT_FAILURE);
    }

    stack[++(*top)] = num;
}
