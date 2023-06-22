#include <stdio.h>


/**
 * pall - Prints all the values on the stack
 * @stack: The stack array
 * @top: The top index of the stack
 *
 * Description:
 * This function prints all the values on the stack,
 * starting from the top of the stack. If the stack is empty,
 * it does not print anything.
 */
void pall(int *stack, int top)
{
	int i;

	if (top == -1)
		return;
	for (i = top; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}
