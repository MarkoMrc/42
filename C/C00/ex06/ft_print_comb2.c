/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:04:45 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/01 20:19:29 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb(int a, int b)
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	write(1, " ", 1);
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);
}

void	ft_putvir(void)
{
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	
   	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putcomb(a, b);
			if (a != 98 || b != 99)
			{
				ft_putvir();
			}
			b++;
		}
		a++;
	}
}
