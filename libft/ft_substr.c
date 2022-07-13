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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	idx;

	if (!s)
		return (0);
	idx = 0;
	arr = (char *)malloc((len +1) * sizeof(char));
	if (arr == 0)
		return (0);
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	while (len--)
	{
		if (!s[start])
			break ;
		arr[idx] = s[start];
		idx++;
		start++;
	}
	arr[idx] = '\0';
	return (arr);
}
