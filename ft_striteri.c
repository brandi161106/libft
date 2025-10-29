/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <blocquia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:34:51 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/29 17:16:47 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
void	ft_capitalize_odd(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c - 32;
}

int	main(void)
{
	char	str[20] = "holamundo";

	printf("Antes: %s\n", str);
	ft_striteri(str, ft_capitalize_odd);
	printf("Despues: %s\n", str);
	return (0);
}
*/