/*
Questions
    - We return the dest even if the n is fucked ??
    - Should i take into consideration the case of n <= 0 ? for this function and the other mememory fct ?
    - Pointer Arithmetic 

Comments
    - Can't fucking use malloc !!!!
    - https://github.com/jwon42/42cursus_01_Libft/blob/master/02_myown/ft_memmove.c
        The implementation is very smart. first we check if there is a total overlap or if n is fucked
        A total overlap just means we return the dest (n)

        Then we use pointer arithmetic -> we compare the addresses.
         say there is an overlap and dest is after src we would lose the information of src before we get the chance
         to copy them

    - I dont understand what I am doing with the pointers and the castings below

*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *)dest + n - 1) = *((char *)src + n - 1);
			n--;
		}
	}
	return (dest);
}

/*
TESTING
*/

/*

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/