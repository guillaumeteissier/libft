#include "libft.h"

int ft_intlen(int n)
{
    int temp;
    long long len;
    
    temp = n;
    len = 1;
    if (n < 0)
    {
        temp = temp * (-1);
        len++;
    }
    while (temp >= 10)
    {
        temp /= 10;
        len++;
    }
    return (len);
}

char		*ft_strreverse(char *str)
{
	int i;
	int size;
	char    tmp;

	size = ft_strlen(str);
	i = 0;
	while (i < (size / 2))
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	return (str);
}


char *ft_itoa(int n)
{
    char *string;
    int i;
    int sign;

    i = 0;
    sign = 1;
    if (n == 0)
        return (ft_strdup("0"));
    string = malloc(sizeof(char) * (ft_intlen(n) + 1));
    ft_memset(string, '\0', ft_intlen(n) + 1);
    if (string == 0)
        return (NULL);
    if (n < 0)
    {
        n = n * (-1);
        sign = -1;
    }
    while (n != 0)
    {
        string[i++] = (n % 10) + '0';
        n = n / 10;
    }
    if (sign == -1)
        string[i++] = '-';
    return (ft_strreverse(string));
}


/*
TESTING
*/

/*
int main(void)
{
    printf("%s", ft_itoa(-1034));
    
    return 0;
}
*/