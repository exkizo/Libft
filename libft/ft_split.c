/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:44:31 by jocorrei          #+#    #+#             */
/*   Updated: 2021/10/27 15:44:31 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_strs(char const *str, char sep)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == sep && *str)
			str++;
		if (*str == '\0')
			break ;
		while (*str != sep && *str)
			str++;
		count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		len;
	size_t		index;
	const char	*start;
	char		**split;

	index = 0;
	split = (char **)malloc((count_strs(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		start = s;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		if (*(s - 1) != c)
			split[index++] = ft_substr(start, 0, len);
	}
	split[index] = 0;
	return (split);
}
