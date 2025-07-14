/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:31:36 by ttudor            #+#    #+#             */
/*   Updated: 2025/01/19 21:01:14 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_border(int col, int x, int y, int row)
{
	if ((row == 1 && col == 1) || (row == y && col == x))
		ft_putchar('A');
	else if ((row == 1 && col == x) || (row == y && col == 1))
		ft_putchar('C');
	else if (row == 1 || row == y)
		ft_putchar('B');
	else if (col == 1 || col == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			print_border(col, x, y, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
