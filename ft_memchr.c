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

void	*ft_memchr(const void *s, int c, size_t n)
{
	int					i;
	unsigned const char	*t;

	i = 0;
	t = (unsigned const char *)s;
	while (n > 0)
	{
		if (c == t[i])
			return (&s[i]);
		i++;
	}
	return (NULL);
}
