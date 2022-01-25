#include "libft.h"
/*
QUESTIONS AND COMMENTS
    
    - What happens if we run out of s for the substring ??
        return NULL ? allocate 0 ? finish the substring with a '\0' ?
*/

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    i = 0;
    if (!s)
        return (NULL);
    substr = malloc(len + 1);
    if (substr == 0)
        return (NULL);
    while ((i < len) || (start + i < len))
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}


/*
TESTING
*/

/*
int main(void)
{
    char string[] = "hello";
    int start = 2;
    int len = 4;


    printf("%s", ft_substr(string, start, len));

    return (0);
}

*/