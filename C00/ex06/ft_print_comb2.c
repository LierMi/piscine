/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 22:17:16 by limi              #+#    #+#             */
/*   Updated: 2025/01/20 22:47:56 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int n)
{
	char	c;

	c = n / 10 + '0';
	write(1, &c, 1);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_space(void)
{
	write(1, " ", 1);
}

void	ft_print_comma(void)
{
	write(1, ", ", 2);
}

void	ft_print_pair(int a, int b)
{
	ft_print_num(a);
	ft_print_space();
	ft_print_num(b);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_pair(a, b);
			if (!(a == 98 && b == 99))
				ft_print_comma();
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }