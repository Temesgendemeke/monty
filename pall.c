#include "monty.h"


/**
 * pall_h - function that handles printing all values in the stack
 * @stack:  pointer to a pointer to the stack data structure.
 * Return: void
 */
void pall_h(stack_t **stack, unsigned int num)
{
	stack_t *current = (*stack);
	(void)num;

	if ((*stack) == NULL || stack == NULL)
		return;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

/**
 * push_h - function that push a value onto the stack
 * @stack: stack
 * @num: valu to push in
 * Return: void
 */
void push_h(stack_t **stack, unsigned int num)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "L%u: usage: memory allocation failed\n", num);
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}


