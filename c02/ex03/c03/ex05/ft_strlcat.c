/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:59:35 by limi              #+#    #+#             */
/*   Updated: 2025/01/27 16:27:52 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = 0;
	s_len = 0;
	i = 0;
	while (dest[d_len])
		d_len++;
	while (src[s_len])
		s_len++;
	if (size <= d_len)
		return (size + s_len);
	while (src[i] && (d_len + i) < (size - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

// int	main()
// {
// 	char	src[] = "Hello";
// 	char	dest[50] = "42school";

// 	printf("%s\n", dest);
// 	unsigned int	result = ft_strlcat(dest, src, 20);
// 	printf("%s\n", dest);
// 	printf("%u\n", result);
// 	return (0);
// }