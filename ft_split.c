#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && i == 0)
			words++;
		else if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

void	ft_free_result(char **arr, int j)
{
	while (j < 0)
	{
		j--;
		free(arr[j]);
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		start;
	int		len;

	if (!s)
		return (NULL);
	result = malloc((sizeof (char *)) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if (s[i] == c)
				len = i - start;
			else
				len = i - start + 1;
			result[j] = ft_substr(s, start, len);
			if (!result[j])
				return (ft_free_result(result, j), NULL);
			j++;
			start = -1;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}
