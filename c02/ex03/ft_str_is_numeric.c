/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:14:09 by limi              #+#    #+#             */
/*   Updated: 2025/01/25 16:21:43 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "42";
// 	char	str2[] = "";
// 	char	str3[] = "Hello42";

// 	printf("%d\n", ft_str_is_numeric(str1));
// 	printf("%d\n", ft_str_is_numeric(str2));
// 	printf("%d\n", ft_str_is_numeric(str3));
// }