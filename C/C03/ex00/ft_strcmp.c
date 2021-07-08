/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:27:18 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/08 15:29:35 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	unsigned char	c1;
	unsigned char	c2;
	int				i;

	i = 0;
	while (s1[i] || s2[i])
	{
		c1 = s1[i];
		c2 = s2[i];
		i++;
		if (c1 != c2)
			return (c1 - c2);
	}
	return (0);
}
