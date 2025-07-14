/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:48:26 by limi              #+#    #+#             */
/*   Updated: 2025/01/28 18:19:29 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
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
// 	char	src[] = "42school";
// 	printf("%s\n", ft_strcat(dest, src, 2));
// 	return (0);
// }