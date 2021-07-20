/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:37:29 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/17 09:45:19 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_param(int	size, char	**tab)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

int	main(int	argc, char	**argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc > 1)
	{
		ft_sort_param(argc, argv);
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			j++;
			ft_putchar('\n');
		}
	}
	return (0);
}
