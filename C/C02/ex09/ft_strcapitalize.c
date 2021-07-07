/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:14:21 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/07 11:07:15 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if (str[i] >= 'a' && str [i] <= 'z')
		{
			if ((str[i - 1] >= 0) && (str[i - 1] <= 47))
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 58 && str[i - 1] <= 64)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 91 && str[i - 1] <= 96)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 123 && str[i - 1] < 127)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (0);
}
