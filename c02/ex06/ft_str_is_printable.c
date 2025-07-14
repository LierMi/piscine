/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:05:54 by limi              #+#    #+#             */
/*   Updated: 2025/01/25 16:29:45 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "Hello!";
// 	char	str2[] = "";
// 	char	str3[] = "\v\n\f";

// 	printf("%d\n", ft_str_is_printable(str1));
// 	printf("%d\n", ft_str_is_printable(str2));
// 	printf("%d\n", ft_str_is_printable(str3));
// }