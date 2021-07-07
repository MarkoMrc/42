/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basehexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:34:40 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/07 15:46:40 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	basehexa(char *str)
{
	unsigned int	i;
	unsigned int	value;
	char			*hexa;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		value = str[i];
		ft_putchar(hexa[(((unsigned char)value) / 16)]);
		ft_putchar(hexa[(((unsigned char)value) % 16)]);
	}
}
