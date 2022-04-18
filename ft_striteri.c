#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;
	unsigned int		i2;

	i = 0;
	i2 = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (i2 < i)
		{
			(*f)(i2, s);
			s++;
			i2++;
		}
	}
}