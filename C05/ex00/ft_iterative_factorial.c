/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:57:46 by limi              #+#    #+#             */
/*   Updated: 2025/01/29 20:26:34 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	i = 1;
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%i", ft_iterative_factorial(4));
// }