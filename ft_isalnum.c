#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

/*
Testing
*/

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%d\n", ft_isalnum('Q'));
    printf("%d\n", ft_isalnum('+'));
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum(1));
    printf("%d\n", ft_isalnum('1'));

    printf("\n");

    printf("%d\n", isalnum('Q'));
    printf("%d\n", isalnum('+'));
    printf("%d\n", isalnum('a'));
    printf("%d\n", isalnum(1));
    printf("%d\n", isalnum('1'));

    return (0);
}
*/