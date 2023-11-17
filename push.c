#include "monty.h"



void _push(stack_t **stack, unsigned int num)
{
	int i = 0;

	while (tokens[1][i] != '\0')
	{
		if (tokens[1][i] == '-')
		{
			if (isdigit(tokens[1][i + 1]) != 1)
			{
				fprintf(stderr, "L%u: usage: push integer\n", num);
				free_list(*stack);
				exit(EXIT_FAILURE);
			}
			i++;
		}
		else if (!isdigit(tokens[1][i]))
		{
			fprintf(stderr, "L%u: usage: push integer\n", num);
			free_list(*stack);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	push_h(stack, num);
}
