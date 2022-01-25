#include "libft.h"

/*
The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, 
NUL-terminating the result.
*/
size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		src_idx;
	size_t		value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	while (dst[i] != '\0')
		i++;
	src_idx = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dst[i] = src[src_idx];
		src_idx++;
		i++;
	}
	dst[i] = '\0';
	return (value);
}

/*
TESTING
*/

/*
int main(void)
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
	size_t size = 16;

	int r;

    r = ft_strlcat(first, last, size);

    printf("Value returned: %d\n",r);
    if( r > size )
        printf("String truncated");
    else
        printf("String was fully copied");

    return(0);
}
*/

