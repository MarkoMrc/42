/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:58:27 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/04 16:50:34 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	i;
	int	n;
	int	temp;

	n = 0;
	i = n + 1;
	while (i < size)
	{
		if (tab[n] > tab[i])
		{
			temp = tab[i];
			tab[i] = tab[n];
			tab[n] = temp;
			n = 0;
			i = n + 1;
		}
		else
		{
			n++;
			i++;
		}
	}
}
