/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <blocquia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:38:28 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/29 17:49:25 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_found_set(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;
	char	*s2;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && ft_found_set(set, s1[i]))
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	f = ft_strlen(s1);
	while (f > i && ft_found_set(set, s1[f - 1]))
		f--;
	s2 = malloc(f - i + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1 + i, f - i);
	s2[f - i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("pcaoHolamundo", "apoc"));
	return (0);
}
*/
