#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
    printf("%d\n", ft_isalpha('Q'));
    printf("%d\n", ft_isalpha('+'));
    printf("%d\n", ft_isalpha('a'));

    printf("%d\n", isalpha('Q'));
    printf("%d\n", isalpha('+'));
    printf("%d\n", isalpha('a'));

    return (0);
}
*/