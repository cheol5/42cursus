/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:29:06 by coh               #+#    #+#             */
/*   Updated: 2022/07/07 21:25:28 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./includes/libft.h"
size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


void *ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	len;
	unsigned char * a;

	i = 0;
	a = dst;
	len = ft_strlen(dst);
	while (i < n && i + 1 < len)
	{
		a[i] = ((unsigned char *)src)[i];
		i++;
	}
	a[i] = '\0';
	return (void *)(a);
}
