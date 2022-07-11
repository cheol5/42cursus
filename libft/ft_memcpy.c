/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:58:55 by coh               #+#    #+#             */
/*   Updated: 2022/07/07 21:25:28 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char * a;

	i = 0;
	a = dst;
	while (i < n)
	{
		a[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (void *)(a);
}


/*
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
*/
int main()
{
	char a[5] = {'a','b','c','d','e'};
	char b[] = "CHEOL";
	printf("%s", ft_memcpy(0,0,5));
}