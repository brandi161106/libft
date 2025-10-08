/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:12:37 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/06 18:29:16 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*buffer;
	size_t			buffer_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > 4294967295 / size)
		return (NULL);
	buffer_size = nmemb * size;
	buffer = malloc(buffer_size);
	if (buffer == NULL)
		return (NULL);
	return (ft_memset(buffer, 0, buffer_size));
}
