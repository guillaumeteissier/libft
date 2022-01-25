#include "libft.h"
/*
QUESTIONS & COMMENTS

    - What is the type of the array ?
        maybe I ll use size_t as well ???
    - Can I use a void pointer ?
    How do I check for overflow ???
*/


void    ft_bzero(void *s, size_t n)
{
    unsigned char *p;

    p = s;
    while (n--)
    {
        *p = '\0';
        p++;
    }
}

void *ft_calloc(size_t nmemb, size_t size)
{
    void *buffy_vampires;

    if (nmemb == 0 || size == 0)
        return (NULL);
    buffy_vampires = malloc(nmemb * size);
    if (buffy_vampires == 0)
        return (NULL);
    ft_bzero(buffy_vampires, nmemb * size);
    return (buffy_vampires);
}

/*
TESTING
*/

/*
int main(void)
{
    char *test_array;
    test_array = ft_calloc(5,5);
    int i = 0;
    while (test_array[i])
    {
        printf("%d", test_array[i]);
        i++;
    }
}
*/