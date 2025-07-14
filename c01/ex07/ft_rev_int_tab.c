/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:51:01 by limi              #+#    #+#             */
/*   Updated: 2025/01/22 17:43:02 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[5] = {1, 2, 3, 4, 5};
// 	int	i;

// 	i = 0;
// 	ft_rev_int_tab(tab, 5);
// 	while (i < 5)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }