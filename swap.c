#include "monty.h"

/**
 * swap_h - function that swaps the top 2 elements in the stack
 * @stack: stack
 * @len: len
 * Return: Void
 */

void swap_h(stack_t **stack, unsigned int len)
{
        stack_t *temp;

        if ((*stack) == NULL || (*stack)->next == NULL)
        {
                fprintf(stderr, "L%u: cant swap, stack too short\n", len);
                free_list(*stack);
                exit(EXIT_FAILURE);
        }
        temp = (*stack)->next;
        (*stack)->next = temp->next;
        if (temp->next != NULL)
		{
                temp->next->prev = (*stack);
        }
        (*stack)->prev = temp;
        temp->next = (*stack);
        temp->prev = NULL;
        (*stack) = temp;
}

