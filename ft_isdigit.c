#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
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
    printf("%d\n", ft_isdigit('Q'));
    printf("%d\n", ft_isdigit('+'));
    printf("%d\n", ft_isdigit('a'));
    printf("%d\n", ft_isdigit(1));
    printf("%d\n", ft_isdigit('1'));

    printf("%d\n", isdigit('Q'));
    printf("%d\n", isdigit('+'));
    printf("%d\n", isdigit('a'));
    printf("%d\n", isdigit(1));
    printf("%d\n", isdigit('1'));

    return (0);
}
*/