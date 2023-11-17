#include "monty.h"
  
/**
 * _stdup - function that duplicates a string
 * @str: string to duplicate
 * Return: pointer to duplicate
 */

char *_stdup(char *str)
{
        char *dup;
        unsigned int i;
        int len;

        if (str == NULL)
                return (NULL);
        len = strlen(str);
        dup = malloc(sizeof(char) * (len + 1));
        if (dup == NULL)
        {
                return (NULL);
        }
        for (i = 0; str[i]; i++)
		{
                dup[i] = str[i];
        }
        dup[i] = '\0';
        return (dup);
}

