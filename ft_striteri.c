#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (y < i)
		{
			(*f)(y, s);
			s++;
			y++;
		}
	}
}

//  Each character is passed by address to f to be modified if necessary
// IDK 