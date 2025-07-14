/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:03:31 by limi              #+#    #+#             */
/*   Updated: 2025/02/01 18:58:16 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_base_valid(char	*base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_value_from_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	skip_whitespace(char *str, int *index)
{
	while (str[*index] == ' ' || (str[*index] >= 9 && str[*index] <= 13))
		(*index)++;
	return (*index);
}

int	handle_sign(char *str, int *index, int *sign)
{
	if (str[*index] == '-' || str[*index] == '+')
	{
		if (str[*index] == '-')
			*sign = -1;
		(*index)++;
	}
	return (*index);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	base_len;
	int	value;

	result = 0;
	base_len = 0;
	value = 0;
	if (!is_valid_base(base))
		return (0);
	while (base[base_len])
		base_len++;
	skip_whitespace(str, &index);
	handle_sign(str, &index, &sign);
	while ((value = get_value_from_base(str[*index], base)) != -1)
	{
		result = result * base_len + value;
		(*index)++;
	}
	return (result * sign);
}


/*
int	main(void)
{
	char *base = "0123456789ABCDEF"; // 16进制基数
	char *str1 = "1A"; // 26
	char *str2 = "2F"; // 47
	char *str3 = "FF"; // 255
	char *str4 = "G";  // 无效字符
}
*/