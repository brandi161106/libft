/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <blocquia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:04:16 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/06 19:34:07 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*t;
	const unsigned char	*x;

	i = 0;
	t = (const unsigned char *)s1;
	x = (const unsigned char *)s2;
	while (i < n)
	{
		if (t[i] != x[i])
			return (t[i] - x[i]);
		i++;
	}
	return (0);
}
