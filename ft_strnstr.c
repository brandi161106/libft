/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:17:57 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/01 20:23:33 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j] && j < len)
			j++;
		if (little[j] == '\0')
			return (&big[i]);
		i++;
	}
	return (0);
}
