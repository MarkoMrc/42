/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:03:48 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/06 12:56:27 by mmaric           ###   ########.fr       */
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
	if (argc > 0)
	{
		i = 0;
		while (argv[0][i] != '\0')
		{	
			ft_putchar(argv[0][i]);
			i++;
		}
	}
	return (0);
}
