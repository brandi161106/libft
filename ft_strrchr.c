/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:53:54 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/29 16:38:47 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				j;
	unsigned char	x;

	i = 0;
	j = -1;
	x = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (x == s[i])
			j = i;
		i++;
	}
	if (x == '\0')
		return ((char *)&s[i]);
	if (j != -1)
		return ((char *)&s[j]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strrchr("hola hola hola", ' '));
}
*/
