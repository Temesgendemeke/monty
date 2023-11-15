#include "monty.h"


Command *tokenize(char *buffer)
{
    char* token = strtok(buffer, " ");
    int i = 0;
    char *c;
    while(token != NULL)
    {
        c[i] = *token;
        token = strtok(NULL, " ");
    } 

    return ;
}