#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p;

    p = (unsigned char*)s;
    while (n)
    {
        if (*p == (unsigned char)c)
        {
            return (p);
        }
        p++,
        n--;
    }
    return (NULL);
}

/*
TESTING
*/

/*
int main()
{
    char s[] = "Aticleworld";
    char *ptr = memchr(s,'c',sizeof(s));
    if (ptr != NULL)
    {
        printf ("'c' found at position %d.\n", ptr-s+1);
        printf ("search character found:  %s\n", ptr);
    }
    else
    {
        printf ("search character not found\n");
    }

    char *ptr1 = ft_memchr(s,'c',sizeof(s));
    if (ptr1 != NULL)
    {
        printf ("'c' found at position %d.\n", ptr1-s+1);
        printf ("search character found:  %s\n", ptr1);
    }
    else
    {
        printf ("search character not found\n");
    }

    return 0;
}

*/