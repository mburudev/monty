#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Usage: %s <integer>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	/* Convert the command-line argument to an integer */
	num = atoi(argv[1]);

	if (num == 0 && argv[1][0] != '0')
	{
		/* Conversion failed, input was not an integer */
		printf("L1: usage: push integer\n");
		exit(EXIT_FAILURE);
	}

	/* Push the integer value onto the stack (do further processing here) */
	printf("Pushed onto stack: %d\n", num);

	return (0);
}
