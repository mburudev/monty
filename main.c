#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 100

extern void push(int stack[], int *top, int num);
extern void pall(int stack[], int top);

int main(int argc, char *argv[])
{
    int stack[STACK_SIZE];
    int top = -1;
    FILE *file;
    char opcode[10];
    int num;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error opening file.\n");
        exit(EXIT_FAILURE);
    }

    while (fscanf(file, "%s", opcode) == 1)
    {
        if (strcmp(opcode, "push") == 0)
        {
            if (fscanf(file, "%d", &num) != 1)
            {
                fprintf(stderr, "[stderr]: L%d: usage: push integer\n", __LINE__);
                exit(EXIT_FAILURE);
            }
            push(stack, &top, num);
        }
        else if (strcmp(opcode, "pall") == 0)
        {
            pall(stack, top);
        }
    }

    fclose(file);
    return 0;
}
