#include "monty.h"

Stack *createStack() {
  Stack *stack = (Stack *)malloc(sizeof(Stack));
  Stack->top = NULL;
  return stack;
}