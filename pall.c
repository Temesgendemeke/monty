#include "monty.h"

void pall(stack_t *stack)
{
 if (!stack->top) {
    printf("Stack is empty.\n");
    return;
  }

  Node *temp = stack->top;
  printf("Stack: ");
  while (temp) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");

}