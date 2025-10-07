#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*x;
	size_t	i;
	size_t	len;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	x = malloc(len + 1);
	if (x == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		x[i] = (*f)(i, s[i]);
		i++;
	}
	x[i] = '\0';
	return (x);
}
