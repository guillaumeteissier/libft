#include "libft.h"

// https://stackoverflow.com/questions/9410/how-do-you-pass-a-function-as-a-parameter-in-c

/*
QUESTIONS AND COMMENTS

    - Do I need to check that f is not null ?? -> like !f

*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *new_string;

    i = 0;
    new_string = malloc(sizeof *new_string * (ft_strlen(s) + 1));
    if (s == NULL || f == NULL || new_string == 0)
        return (NULL);
    while (s[i] != '\0')
    {
        new_string[i] = (*f)(i, s[i]);
        i++;
    }
    new_string[i] = '\0';
    return (new_string);
}

