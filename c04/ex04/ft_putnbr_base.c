/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:36:44 by limi              #+#    #+#             */
/*   Updated: 2025/02/02 19:19:09 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_base_valid(char *base, int *base_len)
{
	int	i;
	int	j;

	i = 0;
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	*base_len = i;
	return (1);
}

void	print_number(long nbr, char *base, int base_len)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		print_number(nbr / base_len, base, base_len);
	write(1, &base[nbr % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	if (!is_base_valid(base, &base_len))
		return ;
	print_number((long)nbr, base, base_len);
}

// int	main(void)
// {
// 	ft_putnbr_base(-1000000000, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(7, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(22, "0123456789ABCDEF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "");
// 	write(1, "\n", 1);
// }