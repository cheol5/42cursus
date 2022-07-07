/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coh <coh@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:50:55 by coh               #+#    #+#             */
/*   Updated: 2022/07/07 21:25:22 by coh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int	minus;
	int	i;
	int	data;

	i = 0;
	minus = 1;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	data = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{	
		data *= 10;
		data += str[i] - '0';
		i++;
	}
	return (data * minus);
}

int main()
{
	printf("%d\n", atoi("  '\n'  1234"));
	printf("%d\n", atoi("    a-123"));
	printf("%d\n", atoi("    --123"));
	printf("%d\n", ft_atoi("    1234"));
	printf("%d\n", ft_atoi("    a-123"));
	printf("%d\n", ft_atoi("    --123"));
}