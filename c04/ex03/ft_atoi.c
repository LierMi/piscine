/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:42:05 by limi              #+#    #+#             */
/*   Updated: 2025/02/01 17:47:00 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str >= 0 && *str <= 32))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

// int	main(void)
// {
// 	char	str[] = "---+--+1234ab567";
// 	printf("%d\n", ft_atoi(str));
// }