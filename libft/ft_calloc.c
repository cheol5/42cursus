/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:26:53 by coh               #+#    #+#             */
/*   Updated: 2022/07/07 21:25:22 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	
}


int main()
{
	int len = 4;
	int* arr = (int*)calloc(len,sizeof(int));
	for (int i = 0; i < len; i++)
	{
		printf("%d",arr[i]);
	}
}