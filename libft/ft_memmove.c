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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int main()
{
	char a[5] = {'a','b','c','d','e'};
	char b[1] = {'a'};
	printf("%s\n", ft_memmove(a,2,5));
	printf("%s", memmove(a, , 5));
}