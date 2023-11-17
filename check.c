#include "monty.h"
  
/**
 * check - function responsible for determining the appropriate action to take based on the opcode.
 * @len: The current line number in the file.
 * @stack: A pointer to a pointer to the stack data structure
 * @opcode: The opcode (instruction) to be checked
 * @tokens: An array of strings representing the tokens on the current line.
 * Return: void
 */

void check(char *opcode, stack_t **stack, unsigned int len, char **tokens)
{
        int i;

	instruction_t instructions[] = {
		{"push", push_h}, {"pall", pall_h}, {"pint", pint_h}, {"swap", swap_h}, {"nop", nop_h}, {NULL, NULL}
	};
	if (tokens[0] != NULL && *tokens[0] != '\0' && *tokens[0] != '#')
	{
		for (i = 0; instructions[i].opcode != NULL; i++)
		{
			if (strcmp(opcode, instructions[i].opcode) == 0)
			{
				instructions[i].f(stack, len);
				return;
			}
		}
		if (instructions[i].opcode != NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", len, tokens[0]);
			free_list(*stack);
			exit(EXIT_FAILURE);
		}
	}
}
