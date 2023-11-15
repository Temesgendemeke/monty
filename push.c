//#include "monty.h"



int push(char* n)
{
   int num = atoi(n);

   if (!isdigit(num))
   {
    perror("L<line_number>: usage: push integer\n");
    exit(EXIT_FAILURE);
   }
   
}