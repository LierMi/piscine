/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:45:12 by limi              #+#    #+#             */
/*   Updated: 2025/02/01 21:47:38 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	arr = (int *)malloc(len * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	int	min = 2, max = 6;
// 	int	*arr = ft_range(min, max);
// 	int	i = 0;

// 	if (arr)
// 	{
// 		while (i < max - min)
// 		{
// 			printf("%d", arr[i]);
// 			i++;
// 		}
// 		free(arr);
// 	}
// 	return (0);
// }