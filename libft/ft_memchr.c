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
	unsigned char	*s1;

	s1 = (unsigned char *)str;
	while (*s1 && n > 0)
	{
		if (*s1 == (unsigned char)c)
		{
			return (s1);
		}
		s1++;
		n--;
	}
	s1 = NULL;
	return ((void *)s1);
}
