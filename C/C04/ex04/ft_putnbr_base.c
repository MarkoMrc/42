/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:52:18 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/14 16:18:06 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checkchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+'
			|| (str[i] > 4 && str[i] < 15) || str[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

int	check_base(char	*str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (0);
	if (checkchar(str) == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char	*base)
{
	long int		nb;
	int				n[100];
	int				size;
	int				i;

	nb = nbr;
	i = 0;
	if (check_base(base) == 1)
	{
		size = ft_strlen(base);
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		while (nb)
		{
			n[i] = nb % size;
			nb = nb / size;
			i += 1;
		}
		while (i > 0)
			ft_putchar(base[n[--i]]);
	}
}
