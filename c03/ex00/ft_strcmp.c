/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:08:42 by limi              #+#    #+#             */
/*   Updated: 2025/01/28 17:35:19 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("hello", "hello42"));
// 	printf("%d\n", ft_strcmp("hello", "he42"));
// 	printf("%d\n", ft_strcmp("hello", "hello"));
// }