/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:36:05 by marvin            #+#    #+#             */
/*   Updated: 2022/07/08 15:36:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void ft_bzero(void *s, size_t n)
{
  size_t i;
  unsigned char *arr;

  arr = (unsigned char *)s;
  i = 0;
  while (i < n)
  {
    arr[i] = 0;
    i++;
  }
}
