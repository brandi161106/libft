/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:28:13 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/06 18:17:44 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_to_con;
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size < len_dst)
		return (size + len_src);
	len_to_con = size - len_dst - 1;
	i = 0;
	while (src[i] && i < len_to_con)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
