/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:12:28 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/13 17:24:47 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


	int	ft_is_prime(int	nb)
{
	int i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb )
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
		return (1);
}

int	ft_find_next_prime(int	nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (nb++)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (0);
}
