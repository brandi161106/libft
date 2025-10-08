/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <blocquia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:55:11 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/06 19:35:10 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*t;
	unsigned char			x;

	i = 0;
	t = (const unsigned char *)s;
	x = (unsigned char)c;
	while (n > 0)
	{
		if (x == t[i])
			return ((char *)&t[i]);
		i++;
		n--;
	}
	return (NULL);
}
