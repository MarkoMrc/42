/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:55:52 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/08 15:30:22 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned char	c1;
	unsigned char	c2;
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		c1 = s1[i];
		c2 = s2[i];
		i++;
		if (c1 != c2)
			return (c1 - c2);
	}
	return (0);
}
