#include "libft.h"

/*
The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, 
NUL-terminating the result.
*/
size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = 0;
	if (dest[i] == '\0' || src[i] == '\0')
		return (0);
	while (src[len])
		len++;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (len);
}


/*
TESTING
*/

/*
void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
*/