#include "monty.h"



void push(stack *stack, char* n)
{
   int num = atoi(n);

   if (!isdigit(num))
   {
    perror("L<line_number>: usage: push integer\n");
    exit(EXIT_FAILURE);
   }
   stack_t newNode = malloc(sizeof(stack_t));
   newNode->n = num;

   if (Stack->top == NULL)
   {
    
   }

}