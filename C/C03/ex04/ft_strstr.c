/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:43:32 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/12 09:57:13 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	int			i;
	int			j;
	char		*k;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			k = str + i;
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (k);
				j++;
			}
			k = 0;
		}
		i++;
	}
	return (0);
}
