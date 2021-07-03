/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaric <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:20:04 by mmaric            #+#    #+#             */
/*   Updated: 2021/07/02 11:55:44 by mmaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	c;
	int	d;
	
	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}

int main()
{
	int a = 26;
	int b = 5;
	int *ptr1;
	int *ptr2;
	int c = a / b;
	int d = a % b;

	ptr1 = &c;
	ptr2 = &d;
	ft_div_mod(a, b, ptr1, ptr2);
	printf("%d %d %d %d", a, b, *ptr1, *ptr2);
	return 0;
}

