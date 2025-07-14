/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:08:30 by limi              #+#    #+#             */
/*   Updated: 2025/02/04 21:35:33 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	cal_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	total_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

void	copy_str(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
}

char	*empty_case(void)
{
	char	*result;

	result = (char *)malloc(1 * sizeof(char));
	if (result)
		result[0] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		j;
	int		k;
	char	*result;

	if (size == 0)
		return (empty_case());
	j = -1;
	k = 0;
	total_len = cal_total_len(size, strs, sep);
	result = (char *)malloc((total_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (++j < size)
	{
		copy_str(result + k, strs[j]);
		k += ft_strlen(strs[j]);
		if (j < size - 1)
		{
			copy_str(result + k, sep);
			k += ft_strlen(sep);
		}
	}
	result[k] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	*strs[] = {"Hello", "42", "school"};
// 	char	*sep = "&";
// 	char	*result = ft_strjoin(3, strs, sep);
// 	char	*empty_result = ft_strjoin(0, NULL, sep);

// 	printf("%s\n", result);
// 	free(result);
// 	printf("%s\n", empty_result);
// 	free(empty_result);
// 	return(0);
// }