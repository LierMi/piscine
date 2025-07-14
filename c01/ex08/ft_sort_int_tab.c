/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:32:07 by limi              #+#    #+#             */
/*   Updated: 2025/01/22 17:57:10 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// int	main (void)
// {
// 	int	tab[5] = {5, 4, 3, 2, 1};
// 	int	i;

// 	i = 0;
// 	ft_sort_int_tab(tab, 5);
// 	while (i < 5)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }