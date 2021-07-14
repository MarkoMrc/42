/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:37:29 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/14 11:44:06 by mmaric           ###   ########.fr       */
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

int	ft_sort_param(int	argc, char	**argv)
{
	int	i;
	int	j;
	char	*temp;

	while (j < argc)
	{
		j = 1;

		while (i < argc)
		{
			i = j + 1;

			if (ft_strcmp(argv[j], argv[i]) < 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
				j = 1;
				i = j + 1;
			}
			else
			{
				i++;
				j++;
			}
			i++;
		}
	}
	return(**argv);
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
}
