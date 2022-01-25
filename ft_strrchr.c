// https://computer.howstuffworks.com/c35.htm

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen((char *)s) + 1;
    while (len)
    {
        if (*(s + len) == c)
        {
            return ((char *)(s + len));
        }
        len--;
    }
    return (0);
}

/*
TESTING
*/

/*
int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char c = '.';
   char *ret;

   ret = ft_strchr(str, c);

   printf("String after '%c' :  %s\n", c, ret);
   
   return(0);
}
*/