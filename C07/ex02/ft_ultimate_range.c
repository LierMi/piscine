/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 21:22:09 by limi              #+#    #+#             */
/*   Updated: 2025/02/01 21:47:24 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(len * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}

// int	main(void)
// {
// 	int	*arr;
// 	int	min = 2, max = 6;
// 	int	len = ft_ultimate_range(&arr, min, max);
// 	int	i;

// 	i = 0;
// 	if (len >= 0)
// 	{
// 		printf("%d\n", len);
// 		while (i < len)
// 		{
// 			printf("%d", arr[i]);
// 			i++;
// 		}
// 		free(arr);
// 	}
// 	return (0);
// }