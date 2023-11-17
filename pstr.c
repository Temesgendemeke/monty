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

