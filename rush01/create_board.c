/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:17:42 by limi              #+#    #+#             */
/*   Updated: 2025/01/25 18:27:25 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*create_board(int rows, int cols)
{
	char	*board;
	int		i;

	board = (char *)malloc (rows * cols * sizeof(char));
	i = 0;
	while (i < rows * cols)
	{
		board[i] = '0';
		i++;
	}
	return (board);
}

void	print_board(char	*board, int rows, int cols)
{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			write (1, &board[i * cols + j], 1);
			write (1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	int		rows;
	int		cols;
	char	*board;

	rows = 4;
	cols = 4;
	board = create_board(rows, cols);
	print_board(board, rows, cols);
	free(board);
	return (0);
}
