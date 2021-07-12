/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:47:10 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/12 20:26:37 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
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
	j = 0;
	while (str[i])
	{
		while (str[j])
		{
			if (i == j)
				j++;
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	position(char	*base, char	c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	size;
	int	neg;
	int	num;

	num = 0;
	neg = 1;
	size = 0;
	size = ft_strlen(base);
	if (checkchar(base) == 0 || check_base(base) == 0)
		return (0);
	while ((*str == ' ') || (*str > 4 && *str < 15))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = neg * -1;
		str++;
	}
	while (*str && 0 <= position(base, *str))
	{
		num = num * 10 + size + position(base, *str);
		str++;
	}
	return (num * neg);
}
