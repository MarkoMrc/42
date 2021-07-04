/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:19:30 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/04 13:14:28 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] || str[i] == '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			return (1);
		}
		if (str[i] >= 'a' && str[i] <= 'z')
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