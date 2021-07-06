# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcapitalize                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaric <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/06 11:26:08 by mmaric            #+#    #+#              #
#    Updated: 2021/07/06 11:26:28 by mmaric           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
		{
			if (!(str[i] <= '9' && str[i] >= '0'))
			{
				i = i + 1;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
				else if (str[i] == ' ')
				{
					i = i + 1;
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (0);
}
