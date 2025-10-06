/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blocquia <blocquia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:51:36 by blocquia          #+#    #+#             */
/*   Updated: 2025/10/06 19:33:24 by blocquia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*x;

	x = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		x[i] = c;
		i++;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	//char s[] = "hola";
	int arr = {1, 2, 3, 4, 5};
	ft_memset(s, 4, 3 * sizeof(int));
	int i = 0;
	while (i < 5)
	{
		printf("%d", s[i]);
		i++;
	}
}
*/
