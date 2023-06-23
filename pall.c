#include <stdio.h>

extern void pall(int stack[], int top);

void pall(int stack[], int top)
{
    int i;

    if (top == -1)
        return;

    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
