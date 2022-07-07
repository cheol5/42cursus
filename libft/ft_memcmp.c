/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:59:28 by coh               #+#    #+#             */
/*   Updated: 2022/07/07 21:25:27 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (n == 0 || (a == 0 && b ==0))
		return (0);
	while (a[i] == b[i] && i < n)
	{
		if (a[i] == 0 || i + 1 == n)
			return (0);
		i++;
	}
	return (int)(a[i] - b[i]);
}

int main()
{
	char *s1 = "cohh";
	char *s2 = "coh";
	printf("%d\n", ft_memcmp(s1, s2, 10));
	printf("%d", memcmp(s1, s2, 10));
}