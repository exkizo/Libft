/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:56:13 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/26 17:56:13 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;

	i = ft_strlen(little);
	if (i == 0)
		return ((char *)big);
	while (len >= i && ft_strlen(big) != 0)
	{
		len--;
		if (!ft_memcmp(big, little, i))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
