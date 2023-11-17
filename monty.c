#include "monty.h"

int main(int argc, char *argv[])
{


	FILE *fptr;
	stack_t *cmd = NULL;
	int num;
	int len = 0;
	char line[max_bytes];
	char *tokens[max_tokens];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: Cant open file%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, max_bytes, fptr) != NULL)
	{
		len++;
		token(line, tokens);
		
		if (tokens[0] != NULL && tokens[0][0] != '#')
		{
			if (strcmp(tokens[0], "push") == 0)
			{
				if (tokens[1] == NULL)
				{
					fprintf(stderr, "L%u: usage: push integer\n", len);
					fclose(fptr);
					free_list(cmd);
					exit(EXIT_FAILURE);
				}
				num = atoi(tokens[1]);
				push_h(&cmd, num);
			}
			else
			{
				check(tokens[0], &cmd, len, tokens);
			}
		}
	}
	free_list(cmd);
	fclose(fptr);
	return 0;
}

