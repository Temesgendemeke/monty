#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack then a new line
 * @stack: double pointer to head node
 * @line_number: line number of opcode instruction
 *
 * Return: Void
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
        stack_t *temp;
	(void)line_number;
        
	temp = (*stack);
        if ((*stack) == NULL || stack == NULL)
        {
                printf("\n");
                return;
        }

        while ((temp != NULL) && (temp->n != 0) &&
                        (temp->n <= 127) && (temp->n >= 0))
        {
                {
                        printf("%c", temp->n);
                        temp = temp->next;
                }
        }
        putchar('\n');
}


void div_h(stack_t **stack, unsigned int line_number)
{
    int result;
    stack_t *temp;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
        free_list(*stack);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_number);
        free_list(*stack);
        exit(EXIT_FAILURE);
    }

    result = (*stack)->next->n / (*stack)->n;
    (*stack)->next->n = result;

    temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}
