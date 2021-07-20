/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:54:28 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/20 11:05:23 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(*dest) * (i + 1));
	if (dest == NULL )
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
