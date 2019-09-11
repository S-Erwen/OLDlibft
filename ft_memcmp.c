/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Erwen <dev.sanjaro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 23:46:39 by Erwen             #+#    #+#             */
/*   Updated: 2019/09/01 23:46:39 by Erwen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t size)
{
	int		i;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (size > 0 && (str1[i] || str2[i]) != '\0')
	{
		if (str1[i] != str2[i])
			return (str1 - str2);
		i++;
		size--;
	}	
	return (0);
}
