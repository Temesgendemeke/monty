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

    while(fgets(line, sizeof(line), fptr) != NULL)
    {
         Command *cmd = tokenize(line);
         printf("%d: %s", i, cmd->data);


        
    }



    fclose(fptr);
    
    return 0;
}