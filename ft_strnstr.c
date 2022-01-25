#include "libft.h"

    /*
    first we check that we have enough len to do a match -> 
    len is the nb of char we searched in str (not in find)
    So long as we have enough to cover the length of find we loop through the str
    */

    /*
    When we get a match for the first char between find and str -> 
    we use the ft_memcmp (we wrote before) -> it does the actual comparison
    If that last condition is filled we return the pointer.
    */


char *ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		position;

    position = ft_strlen((char *)to_find);
	if (*to_find == '\0')
		return ((char *)str);
	while (*str != '\0' && len >= position)
	{

		if (*str == *to_find && ft_memcmp(str, to_find, position) == 0)
			return ((char *)str);
		str++;
        len--;
	}
	return (NULL);
}

/*
TESTING
*/
/*
int main(void)
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 4);
}
*/