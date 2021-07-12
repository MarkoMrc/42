/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:53:53 by vnafissi          #+#    #+#             */
/*   Updated: 2021/07/11 15:27:45 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_createval(char **argv, int val[4][4]);
int		is_valid(int tab[4][4], int val[4][4], int pos);
void	affichage_tableau(int *tab);
int		ft_checkparams(int	argc, char	**argv);

void	ft_init(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{	
	int	val[4][4];
	int	tab[4][4];

	if (ft_checkparams(argc, argv) == 0)
	{	
		write(1, "Error\n", 6);
		return (0);
	}
	ft_init(val);
	ft_init(tab);
	ft_createval(argv, val);
	if (is_valid(tab, val, 0) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	affichage_tableau(*tab);
	return (0);
}
