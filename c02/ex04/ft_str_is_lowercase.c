/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:37:13 by limi              #+#    #+#             */
/*   Updated: 2025/01/25 16:23:46 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "hello";
// 	char	str2[] = "";
// 	char	str3[] = "Hello";

// 	printf("%d\n", ft_str_is_lowercase(str1));
// 	printf("%d\n", ft_str_is_lowercase(str2));
// 	printf("%d\n", ft_str_is_lowercase(str3));
// }