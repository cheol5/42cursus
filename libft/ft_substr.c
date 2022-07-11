/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:51:36 by coh               #+#    #+#             */
/*   Updated: 2022/07/11 14:51:36 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;

	arr = (char *)malloc((len +1) * sizeof(char));
	if (arr == 0)
		return (0);
	if (start + 1 > ft_strlen(s))
		return (0);
	if (start + len - 1 > ft_strlen(s) - 1)
		return (0);
	while (start < len)
	{
		arr[start] = s[start];
		start++;
	}
	return (arr);
}
