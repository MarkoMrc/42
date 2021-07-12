/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_view_validations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnafissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:59:09 by vnafissi          #+#    #+#             */
/*   Updated: 2021/07/11 15:41:15 by vnafissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	row_left_val(int tab[4][4], int i, int val[4][4])
{
	int	eval;
	int	l;
	int	max_int;
	int	vu;

	eval = val[2][i];
	l = 0;
	max_int = 0;
	vu = 0;
	if (tab[i][0] && tab[i][1] && tab[i][2] && tab[i][3])
	{
		while (l <= 3)
		{
			if (tab[i][l] > max_int)
			{
				max_int = tab[i][l];
				vu++;
			}
			l++;
		}
		if (eval != vu)
			return (0);
	}
	return (1);
}

int	row_right_val(int tab[4][4], int i, int val[4][4])
{
	int	eval;
	int	l;
	int	max_int;
	int	vu;

	eval = val[3][i];
	l = 3;
	max_int = 0;
	vu = 0;
	if (tab[i][0] && tab[i][1] && tab[i][2] && tab[i][3])
	{
		while (l >= 0 )
		{
			if (tab[i][l] > max_int)
			{
				max_int = tab [i][l];
				vu++;
			}
			l--;
		}
		if (eval != vu)
			return (0);
	}
	return (1);
}

int	col_up_val(int tab[4][4], int j, int val[4][4])
{
	int	eval;
	int	l;
	int	max_int;
	int	vu;

	eval = val[0][j];
	l = 0;
	max_int = 0;
	vu = 0;
	if (tab[0][j] && tab[1][j] && tab[2][j] && tab[3][j])
	{
		while (l <= 3)
		{
			if (tab[l][j] > max_int)
			{
				max_int = tab[l][j];
				vu++;
			}
			l++;
		}
		if (eval != vu)
			return (0);
	}
	return (1);
}

int	col_down_val(int tab[4][4], int j, int val[4][4])
{
	int	eval;
	int	l;
	int	max_int;
	int	vu;

	eval = val[1][j];
	l = 3;
	max_int = 0;
	vu = 0;
	if (tab[0][j] && tab[1][j] && tab[2][j] && tab[3][j])
	{
		while (l >= 0)
		{
			if (tab[l][j] > max_int)
			{
				max_int = tab[l][j];
				vu++;
			}
			l--;
		}
		if (eval != vu)
			return (0);
	}
	return (1);
}
