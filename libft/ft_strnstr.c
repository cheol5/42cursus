/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:17:06 by coh               #+#    #+#             */
/*   Updated: 2022/07/07 21:25:33 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return ((char *)str);
	while (str[i] != 0)
	{
		while (str[i + j] == to_find[j] && str[i + j] != 0 && i + j < len)
			j++;
		if (to_find[j] == 0)
			return ((char *)&str[i]);
		i++;
		j = 0;
	}
	return (0);
}
