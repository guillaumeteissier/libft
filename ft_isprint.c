#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c < 127)
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
    printf("%d\n", ft_isprint('Q'));
    printf("%d\n", ft_isprint('+'));
    printf("%d\n", ft_isprint('a'));
    printf("%d\n", ft_isprint(1));
    printf("%d\n", ft_isprint('1'));
    printf("%d\n", ft_isprint('\n'));

    printf("\n");

    printf("%d\n", isprint('Q'));
    printf("%d\n", isprint('+'));
    printf("%d\n", isprint('a'));
    printf("%d\n", isprint(1));
    printf("%d\n", isprint('1'));
    printf("%d\n", isprint('\n'));

    return (0);
}
*/