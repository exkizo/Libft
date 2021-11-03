/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 01:19:03 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/26 01:19:03 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s1;

	s1 = (const unsigned char *)str;
	while (*s1 && n > 0)
	{
		if (*s1 == c)
		{
			return ((void *)s1);
		}
		s1++;
		n--;
	}
	return (NULL);
}
