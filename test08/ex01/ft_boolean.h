/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limi <limi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:51:44 by limi              #+#    #+#             */
/*   Updated: 2025/02/04 23:38:47 by limi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum a_bool
{
	FALSE = 0,
	TRUE = 1
}	t_bool;

# define EVEN(number) (number % 2 == 0)
# define ODD(number) (number % 2 != 0)
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif