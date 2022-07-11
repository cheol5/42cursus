/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:21:17 by coh               #+#    #+#             */
/*   Updated: 2022/07/11 11:41:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
void *ft_memset(void *b, int c, size_t len)
{
    size_t	i;
	unsigned char *a;

    i = 0;
	a = b;
    while (i < len)
    {
        a[i] = (unsigned char)c;
		i++;
    }
	return (void *)(a);
}
