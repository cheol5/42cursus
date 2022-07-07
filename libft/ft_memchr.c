/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:41:25 by coh               #+#    #+#             */
/*   Updated: 2022/07/07 21:25:26 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char letter;
	size_t i;

	a = (unsigned char *)s;
	letter = (unsigned char)c;
	i = 0;
	while (a[i] && i < n)
	{
		if (letter == a[i])
			return (void *)&a[i];
		i++;
	}
	return (0);
}

int main(void)
{
	printf("%s\n", (char *)ft_memchr("Cheolho", 'o', 5));
	printf("%s", (char*)memchr("Cheolho", 'o', 5));
}