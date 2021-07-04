/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:43:35 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/04 13:15:08 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] || str[i] == '\0')
	{
		if (str[i] >= '0' && str[i] <= '0')
		{
			return (1);
		}
		if (str[i] == '\0')
		{
			return (1);
		}
		i++;
	}
	return (0);
}