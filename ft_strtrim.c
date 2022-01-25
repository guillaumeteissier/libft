#include "libft.h"
/*
QUESTIONS AND COMMENTS
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len]) && len != 0)
		len--;
	return (ft_substr((char *)s1, 0, len + 1));
}

/*
TESTING
*/

/*
#include<stdio.h>

int main(void)
{
    char s1[] = "helloh";
    char set[] = "he";

    printf("%s", ft_strtrim(s1, set));

    return (0);
}
*/