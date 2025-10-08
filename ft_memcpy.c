/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <blocquia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:47:21 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/06 19:34:53 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*x;
	unsigned const char	*t;

	if (!dest && !src)
		return (NULL);
	x = (unsigned char *)dest;
	t = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		x[i] = t[i];
		i++;
		n--;
	}
	return (dest);
}
