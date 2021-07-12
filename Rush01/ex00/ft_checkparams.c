/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkparams.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:55:05 by kleblond          #+#    #+#             */
/*   Updated: 2021/07/11 12:55:31 by kleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checkparams(int	argc, char	**argv)
{
	int	i;
	int	j;

	if (argc != 2)
		return (0);
	j = ft_strlen(argv[1]);
	if (j != 31)
		return (0);
	i = 0;
	while (argv[1][i] || i < 31)
	{	
		if (i % 2 == 0)
		{	
			if (argv[1][i] > 52 || argv[1][i] < 49)
				return (0);
		}
		else
		{
			if (!(argv[1][i] == ' '))
				return (0);
		}
		i++;
	}
	return (1);
}
