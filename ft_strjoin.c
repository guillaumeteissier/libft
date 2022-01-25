#include "libft.h"
/*
QUESTIONS AND COMMENTS
*/


char *ft_strjoin(char const *s1, char const *s2)
{
    char *newstr;
    int i;
    int y;

    i = 0;
    y = 0;
    newstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (newstr == 0 || !s1 || !s2)
        return (NULL);
    while (s1[i])
    {
        newstr[i] = s1[i];
        i++;
    }
    while (s2[y])
    {
        newstr[i] = s2[y];
        i++;
        y++;
    }
    newstr[i] = '\0';
    return (newstr);
}


/*
TESTING
*/

/*
int main(void)
{
    char s1[] = "hello";
    char s2[] = "hello";

    printf("%s", ft_strjoin(s1, s2));

    return (0);
}
*/