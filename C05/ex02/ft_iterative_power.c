/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:44:41 by limi              #+#    #+#             */
/*   Updated: 2025/01/29 20:58:23 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	while (power > 0)
	{
		i = nb * i;
		power--;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%i", ft_iterative_power(3, 3));
// }