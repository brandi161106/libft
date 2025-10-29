/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <blocquia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:43:42 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/29 16:55:54 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int	main(void)
{
	char str[20] = "Hola mundo";
	
	printf("Antes: %s\n", str);
	ft_bzero(str + 2, 4);
	printf("Despues: %s\n", str);
	return (0);
}
*/