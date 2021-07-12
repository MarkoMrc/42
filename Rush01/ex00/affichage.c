/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:00:46 by vnafissi          #+#    #+#             */
/*   Updated: 2021/07/11 12:05:25 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	affichage_tableau(int *tab)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(tab[i] + '0');
		i++;
		if (i != 4 && i != 8 && i != 12 && i != 16)
		{
			ft_putchar(' ');
		}	
		if (i == 4 || i == 8 || i == 12 || i == 16)
		{
			ft_putchar('\n');
		}
	}
}
