/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:21:17 by coh               #+#    #+#             */
/*   Updated: 2022/07/07 21:25:29 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int main(void)
{
	int arr[5];
	int brr[5];
	for (int i=0; i<5; i++)
		printf("[%d]", *(arr+i));
	printf("\n");
	printf("\n");
	
	memset(arr, 1, sizeof(int)*5);
	for (int i=0; i<5; i++)
		printf("[%d]", *(arr+i));
	printf("\n");
	printf("\n");
	
	for (int i=0; i<5; i++)
		printf("[%d]", *(brr+i));
	printf("\n");
	ft_memset(brr, 1, sizeof(int)*5);
	for (int i=0; i<5; i++)
		printf("[%d]", *(brr+i));
}