/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:47:56 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/06 18:19:35 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	x;

	x = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (x == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == x)
		return ((char *)&s[i]);
	return (NULL);
}
