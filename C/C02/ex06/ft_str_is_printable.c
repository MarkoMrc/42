/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 13:17:42 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/07 18:36:39 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	r = 0;
	i = 0;
	while (str[i])
	{
		// table etendue + unsigned char
		if (!(str[i] >= 32  && str[i] <= 127))
		{
			r = 0;
			break ;
		}
		else
		{
			r = 1;
			break ;
		}
		i++;
	}
	return (r);
}
