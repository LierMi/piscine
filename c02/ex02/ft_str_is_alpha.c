/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:09:47 by limi              #+#    #+#             */
/*   Updated: 2025/01/25 16:17:45 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	i;
	int	lower;
	int	upper;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		lower = (str[i] >= 'a' && str[i] <= 'z');
		upper = (str[i] >= 'A' && str[i] <= 'Z');
		if (lower || upper)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "";
// 	char str3[] = "Hello1234";

// 	printf("%d\n", ft_str_is_alpha(str1));
// 	printf("%d\n", ft_str_is_alpha(str2));
// 	printf("%d\n", ft_str_is_alpha(str3));
// }