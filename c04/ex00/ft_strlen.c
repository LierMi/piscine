/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:46:50 by limi              #+#    #+#             */
/*   Updated: 2025/01/27 16:52:50 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// int	main(void)
// {
// 	printf("%d", ft_strlen("Hello42school"));
// }