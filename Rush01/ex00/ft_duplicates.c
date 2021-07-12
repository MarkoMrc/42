/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicates.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:52:38 by vnafissi          #+#    #+#             */
/*   Updated: 2021/07/11 12:27:51 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_noduplicate(int k, int tab[4][4], int i, int j)
{
	int	l;

	l = 0;
	while (l <= 3)
	{
		if (tab[i][l] == k && l != j)
			return (0);
		l++;
	}
	return (1);
}

int	column_noduplicate(int k, int tab[4][4], int i, int j)
{
	int	l;

	l = 0;
	while (l <= 3)
	{
		if (tab[l][j] == k && l != i)
			return (0);
		l++;
	}
	return (1);
}
