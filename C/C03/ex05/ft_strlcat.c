/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:28:53 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/11 16:22:59 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size <= size_dest)
		return (size_dest + size);
	if (size <= size_dest + 1)
		return (size_dest + size_src);
	if (size > size_dest)
	{
		while (src[i] != '\0' && i < size - size_dest - 1)
		{
			dest[size_dest + i] = src[i];
			i++;
		}
		dest[size_dest + i] = '\0';
	}
	return (size_dest + size_src);
}
