// https://computer.howstuffworks.com/c35.htm

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
        {
            return ((char *)s);
        }
        s++;
    }
    if (c == '\0')
    {
        return ((char *)s);
    }
    return (0);
}

/*
TESTING
*/

/*
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char c = '.';
   char *ret;

   ret = ft_strchr(str, c);

   printf("String after '%c' :  %s\n", c, ret);
   
   return(0);
}
*/