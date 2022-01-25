#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        return (c + 32);
    else
        return (c);
}

/*
TESTING
*/

/*
int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, ft_tolower(c));
    printf("\n%c -> %c", c, tolower(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_tolower(c));
    printf("\n%c -> %c", c, tolower(c));

    c = '9';
    printf("\n%c -> %c", c, ft_tolower(c));
    printf("\n%c -> %c", c, tolower(c));
    return 0;
}
*/