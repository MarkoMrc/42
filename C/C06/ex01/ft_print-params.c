/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print-params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:57:27 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/06 13:01:49 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int	argc, char	*argv[])
{
	int i;
	int	j;

	j = 1;
	if (argc > 0)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			while (argv[j][i] != '\0')
			{	
				ft_putchar(argv[0][i]);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
	return (0);
}
