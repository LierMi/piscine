/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:11:01 by limi              #+#    #+#             */
/*   Updated: 2025/02/04 16:14:10 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	*src = "Hello, 42";
// 	char	*dup = ft_strdup(src);

// 	if (dup)
// 	{
// 		printf("%s\n", src);
// 		printf("%s\n", dup);
// 		free(dup);
// 	}
// 	return (0);
// }