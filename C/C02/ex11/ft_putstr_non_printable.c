/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 11:52:59 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/07 18:57:27 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned int	value;
	char			*hexa;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			value = str[i];
			ft_putchar('\\');
			ft_putchar(hexa[((unsigned char)value) / 16]);
			ft_putchar(hexa[((unsigned char)value) % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
