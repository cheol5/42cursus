/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:06:49 by coh               #+#    #+#             */
/*   Updated: 2022/07/06 16:16:22 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t length(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ds_len;
	size_t	sr_len;
	size_t	i;

	ds_len = length(dest);
	sr_len = length(src);
	i = 0;
	if (ds_len >= size)
		return (sr_len + size);
	while (i < sr_len && i + 1 + ds_len < size)
	{
		dest[ds_len + i] = src[i];
		i++;
	}
	dest[ds_len + i] = '\0';
	return (ds_len + sr_len);
}