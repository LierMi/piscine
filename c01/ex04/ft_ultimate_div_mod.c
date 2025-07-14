/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:49:59 by limi              #+#    #+#             */
/*   Updated: 2025/01/21 21:57:22 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 3;
// 	printf("a: %d, b: %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("div: %d, mod: %d", a, b);
// }