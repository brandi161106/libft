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
	int					i;
	unsigned const char	*t;
	unsigned const char	*x;

	i = 0;
	t = (unsigned const char *)s1;
	x = (unsigned const char *)s2;
	while (i < n && t[i] == x[i] && t[i] != '\0')
		i++;
	if (i == n)
		return (0);
	if (n == '0')
		return (0);
	return (t[i] - x[i]);
}
