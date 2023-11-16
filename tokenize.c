<<<<<<< HEAD
// #include "monty.h"


char *tokenize(char *buffer)
{
    // char *token = strtok(buffer, " ");
    
   
    // char cmdtok[100][100];
    // int itr = 0;
    // while(token != NULL)
    // {
    //     strcpy(cmdtok[itr],token);
    //     token = strtok(NULL, " /t #");
    //     itr++;
    // }

    // return cmdtok;
}
=======
#include "monty.h"
  
/**
 * token - function that tokenize
 * @line: string to tokenize
 * @token: token
 * Retun: void
 */

void token(char *line, char *tokens[])
{
	int i = 1;

	tokens[0] = NULL;
	tokens[0] = strtok(line, " \t\n");
	if (strcmp(tokens[0], "push") == 0)
	{
		tokens[i] = strtok(NULL, " \t\n");
		i++;
	}
	tokens[i] = NULL;
}


/**
 * free_list - function that free a list
 * @head: head pointer
 * Return: void
 */

void free_list(stack_t *head)
{
	stack_t *current;
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
>>>>>>> 674459316991ba9aef56109ef5bb9ced6febd296
