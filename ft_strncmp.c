#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if ((s1[i] != '\0') && (s1[i] == s2[i]))
		{
			while ((s1[i] != '\0') && (s1[i] == s2[i]) && (i < n))
				i++;
		}
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

/*
TESTING
*/

/*

int main() {
  char str1[] = "hello", str2[] = "hello", str3[] = "nopeaa";
  int result;

  // comparing strings str1 and str2
  result = strncmp(str1, str2, 2);
  printf("%d\n", result);
  result = ft_strncmp(str1, str2, 2);
  printf("%d\n", result);

  // comparing strings str1 and str3
  result = strncmp(str1, str3, 6);
  printf("%d\n", result);
  result = ft_strncmp(str1, str3, 6);
  printf("%d\n", result);

  return 0;
}
*/