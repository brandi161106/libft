/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:18:17 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/15 18:14:59 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (j > 0)
	{
		j--;
		free(arr[j]);
	}
	free(arr);
}

char	**ft_solve_res(char const *s, char **result, char c)
{
	int		i;
	int		j;
	int		start;
	int		len;

	i = 0;
	j = 0;
	start = -1;
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			len = i - start + (s[i + 1] == '\0');
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

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((sizeof (char *)) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (ft_solve_res(s, result, c) == NULL)
		return (NULL);
	return (result);
}
