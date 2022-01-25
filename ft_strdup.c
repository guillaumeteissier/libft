#include "libft.h"

/*
QUESTIONS AND COMMENTS

    - What error do I need to handle
        - if s is empty
*/


char *ft_strdup(const char *s)
{
    char *dest;
    int len;
    int i;

    len = ft_strlen(s);
    i = 0;
    if (len == 0)
        return (NULL);
    dest = malloc(sizeof(char) * (len + 1));
    if (dest == 0)
        return (NULL);
    while(s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/*
TESTING
*/

/*
int main(void)
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = ft_strdup(source);
 
    printf("%s", target);
    return 0;
}
*/
