#include "monty.h"
/**
 * pint_h - function that prints value at the top
 * @stack: stack
 * @len: line of instruction
 * Return: void
 */

void pint_h(stack_t **stack, unsigned int len)
{

        if ((*stack) == NULL || stack == NULL)
        {
                fprintf(stderr, "L%u: can't pint, stack empty\n", len);
                free_list(*stack);
                exit(EXIT_FAILURE);
        }
        else
                printf("%d\n", (*stack)->n);
}


/**
 * pop_h - function that removes the top element of the stack
 * @stack: stack
 * @len: line of s=instruction
 * Return: Void
 */

void pop_h(stack_t **stack, unsigned int len)
{
        stack_t *temp;

        temp = (*stack);
        if ((*stack) == NULL || stack == NULL)
        {
                fprintf(stderr, "L%u: can't pop an empty stack\n", len);
                free_list(*stack);
                exit(EXIT_FAILURE);
        }
        (*stack) = temp->next;
        if (temp->next != NULL)
                (*stack)->prev = NULL;
	free(temp);
}
