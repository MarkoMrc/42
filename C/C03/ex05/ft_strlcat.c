/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:28:53 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/08 17:40:39 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int unsigned	i;
	unsigned int	n;

	n = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0' && n < nb)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (i);
}
