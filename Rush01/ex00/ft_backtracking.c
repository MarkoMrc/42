/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:53:53 by vnafissi          #+#    #+#             */
/*   Updated: 2021/07/11 15:23:40 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	row_noduplicate(int k, int tab[4][4], int i, int j);
int	column_noduplicate(int k, int tab[4][4], int i, int j);
int	col_up_val(int tab[4][4], int j, int val[4][4]);
int	col_down_val(int tab[4][4], int j, int val[4][4]);
int	row_left_val(int tab[4][4], int i, int val[4][4]);
int	row_right_val(int tab[4][4], int i, int val[4][4]);

int	ft_check_duplicates(int tab[4][4], int k, int i, int j)
{
	if (row_noduplicate(k, tab, i, j) == 1
		&& column_noduplicate(k, tab, i, j) == 1
	)
		return (1);
	return (0);
}

int	ft_check_val(int tab[4][4], int val[4][4], int i, int j)
{
	if (row_right_val(tab, i, val) == 1
		&& row_left_val(tab, i, val) == 1
		&& col_up_val(tab, j, val) == 1
		&& col_down_val(tab, j, val) == 1)
		return (1);
	return (0);
}

int	is_valid(int tab[4][4], int val[4][4], int pos)
{
	int	i;
	int	j;
	int	k;

	if (pos == 4 * 4)
		return (1);
	i = pos / 4;
	j = pos % 4;
	if (tab[i][j] != 0)
		return (is_valid(tab, val, pos + 1));
	k = 1;
	while (k <= 4)
	{
		tab[i][j] = k;
		if (ft_check_duplicates(tab, k, i, j) == 1
			&& ft_check_val(tab, val, i, j) == 1)
		{	
			if (is_valid(tab, val, pos + 1) == 1)
				return (1);
		}
		k++;
	}
	tab[i][j] = 0;
	return (0);
}
