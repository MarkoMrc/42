/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:19:30 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/05 11:54:57 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	r;

	r = 0;
	i = 0;
	if (str[0] == '\0')
		r = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			r = 1;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			r = 1;
		}
		else
		{
			r = 0;
			break ;
		}
		i++;
	}
	return (r);
}
