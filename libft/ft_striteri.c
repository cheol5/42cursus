/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:32:54 by coh               #+#    #+#             */
/*   Updated: 2022/07/11 16:32:54 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i++])
		f(i, &s[i]);
}
