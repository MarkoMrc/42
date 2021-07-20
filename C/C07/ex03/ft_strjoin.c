/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:41:00 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/20 11:04:28 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n])
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	while (i < size)
		j = j + ft_strlen(strs[i++]);
	if (size > 0)
		j = j + ft_strlen(sep) * (size - 1);
	tab = malloc(sizeof(char) * (j + 1));
	if (tab == NULL)
		return (NULL);
	tab[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i != size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
