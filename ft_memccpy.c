/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Erwen <dev.sanjaro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 01:39:01 by Erwen             #+#    #+#             */
/*   Updated: 2019/09/02 01:39:01 by Erwen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	unsigned int 	i;
	char			*dust2;
	char			*mirage;

	dust2 = dest;
	mirage = (char *)src;
	i = 0;
	while (size > i && (i == 0 || mirage[i - 1] != c))
	{
		dust2[i] = mirage[i];
		i++;
	}
	if (mirage[i] == c && i > 0)
			return (dust2 + i);
	return (NULL);
}