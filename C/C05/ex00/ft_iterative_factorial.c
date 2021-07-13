/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:41:27 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/13 11:57:11 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	int	fact;
	int	i;

	fact = 1
		i = 1;
	if (nb = 0)
		return (fact);
	else if (nb >= 1)
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
	}
	else
		return (0);
	return (fact);
}
