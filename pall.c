#include <stdio.h>

extern int stack[];
extern int top;

/**
 * pall - Prints all the values on the stack
 *
 * Description:
 * This function prints all the values on the stack,
 * starting from the top of the stack. If the stack is empty,
 * it does not print anything.
 */
void pall()
{
	int i;
    if (top == -1)
        return;

    printf("Stack Contents:\n");
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
