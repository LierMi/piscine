/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:40:23 by limi              #+#    #+#             */
/*   Updated: 2025/01/21 21:49:02 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 10;
// 	b = 3;
// 	printf("a: %d, b: %d\n", a, b);
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("div: %d, mod: %d", div, mod);
// }