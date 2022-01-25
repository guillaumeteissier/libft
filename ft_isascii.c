#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
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
    printf("%d\n", ft_isascii('Q'));
    printf("%d\n", ft_isascii('+'));
    printf("%d\n", ft_isascii('a'));
    printf("%d\n", ft_isascii(1));
    printf("%d\n", ft_isascii('1'));
    //printf("%d\n", ft_isascii('ø'));

    printf("\n");

    printf("%d\n", isascii('Q'));
    printf("%d\n", isascii('+'));
    printf("%d\n", isascii('a'));
    printf("%d\n", isascii(1));
    printf("%d\n", isascii('1'));
    //printf("%d\n", isascii('ø'));

    return (0);
}
*/