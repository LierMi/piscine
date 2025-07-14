/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:51:40 by limi              #+#    #+#             */
/*   Updated: 2025/02/03 21:39:12 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		write (1, argv[i], ft_strlen(argv[i]));
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
