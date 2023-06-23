#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern void push(int num);
extern void pall();

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 *
 * Description:
 * This function is the entry point of the program. It reads a file
 * containing bytecode instructions and executes the corresponding operations.
 * The "push" instruction pushes an integer onto the stack, and the "pall"
 * instruction prints all the values on the stack.
 */
int main(int argc, char *argv[])
{
	char opcode[10];
    int num;
    FILE *file;
    
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
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
            fscanf(file, "%d$", &num);
            push(num);
        }
        else if (strcmp(opcode, "pall") == 0)
        {
            pall();
        }
    }

    fclose(file);
    return 0;
}
