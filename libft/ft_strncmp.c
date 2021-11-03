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
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	while ((*s1 && *s2) || n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
