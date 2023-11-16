#include "monty.h"
int line_number = 0;
char line[1024];
int main(int argc, char *argv[])
{
    
    if (argc > 2 || argc == 1 || (access(argv[1], F_OK)))
    {
        perror("USAGE: monty file");
        exit(EXIT_FAILURE);
    }

    FILE *fptr;

    fptr = fopen(argv[1], "r");
    if(fptr == NULL)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    int i = 0;
    char commands[100][100];
    int numCommands = 0;
    while(fgets(line, sizeof(line), fptr) != NULL)
    {
         if (line[0] != '\n' && line[0] != '\t')
         {
            strcpy(commands[numCommands], line);
            numCommands++;
         }   
    }
    
    for (int x = 0; x < numCommands; x++)
    {
         char *token = strtok(commands[x], " ");
         char cmdtok[100][100];
         int itr = 0;
    while(token != NULL)
    {
        strcpy(cmdtok[itr],token);
        token = strtok(NULL, " /t #");
        itr++;
    }
        if (strcmp("push", cmdtok[0]))
        {
            push(Stack *stack, cmdtok[1]);
        }
    }




    fclose(fptr);
    
    return 0;
}