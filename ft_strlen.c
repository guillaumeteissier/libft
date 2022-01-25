#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}


/*
Testing
*/

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_strlen("hello"));

    printf("\n");

    printf("%d\n", strlen("hello"));
    
    return (0);
}

*/