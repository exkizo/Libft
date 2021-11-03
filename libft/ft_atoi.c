/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <jocorrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:48:31 by jocorrei          #+#    #+#             */
/*   Updated: 2021/11/03 18:12:27 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	joker;

	res = 0;
	joker = 1;
	while (*str != '\0' && ft_strchr("\t\n\v\f\r ", *str) != NULL)
		str++;
	if (*str != '\0' && ft_strchr("+-", *str) != NULL)
	{
		if (*str == '-')
			joker *= -1;
		str++;
	}
	while (*str != '\0' && ft_strchr("0123456789", *str) != NULL)
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * joker);
}
