#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/types.h>
#include <stddef.h>
#include <string.h>
#include <fcntl.h>

#define max_tokens 100
#define max_bytes 1024

extern int len;
extern char *tokens[3];
char *tokens[3];

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;





void check(char *opcode, stack_t **stack, unsigned int len, char **tokens);
void token(char *line, char *tokens[]);
char *_stdup(char *str);
void pint_h(stack_t **stack, unsigned int len);
void pop_h(stack_t **stack, unsigned int len);
void swap_h(stack_t **stack, unsigned int len);
void nop_h(stack_t **stack, unsigned int len);
void push_h(stack_t **stack, unsigned int num);
void free_list(stack_t *head);
void pall_h(stack_t **stack, unsigned int num);

#endif

