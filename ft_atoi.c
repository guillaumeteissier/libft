#include "libft.h"

int ft_atoi(const char *nptr)
{
    int nb;
    int sign;
    
    nb = 0;
    sign = 1;
    while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n' ||
			*nptr == '\r' || *nptr == '\t' || *nptr == '\v')
            nptr++;
    while (*nptr == '-' || *nptr == '+')
    {
        if (*nptr == '-')
            sign = sign * (-1);
        nptr++;
    }
    while (ft_isdigit(*nptr))
    {
        nb = (nb * 10) + (*nptr - 48);
        nptr++;
    }
    return (sign * nb);
}

/*
TESTING
*/

/*
int main () {
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
*/
