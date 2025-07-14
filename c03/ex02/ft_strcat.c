/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:05:09 by limi              #+#    #+#             */
/*   Updated: 2025/01/23 22:31:45 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[30] = "Hello, ";
// 	char	src[] = "42!";

// 	printf("%s\n", ft_strcat(dest, src));
// }