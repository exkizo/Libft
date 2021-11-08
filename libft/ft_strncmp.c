/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 00:24:58 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/26 00:24:58 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while ((*s1 && *s2) || n > 0)
	{
		if (*s1 != *s2 || --n == 0 || *s1 == '\0' || *s2 == '\0')
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
