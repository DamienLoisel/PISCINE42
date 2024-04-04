/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnedel <tnedel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 09:48:49 by tnedel            #+#    #+#             */
/*   Updated: 2024/03/16 13:07:31 by tnedel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	print_line(int ord, int abs, int x, int y)
{
	if (ord == 1 || ord == y)
	{
		ft_putchar(111);
		while (abs <= (x - 2))
		{
			ft_putchar(45);
			abs++;
		}
		if (abs != 1)
			ft_putchar(111);
	}
	else
	{
		ft_putchar(124);
		while (abs <= (x - 2))
		{
			ft_putchar(32);
			abs++;
		}
		if (abs != 1)
			ft_putchar(124);
	}
}

void	rush(int x, int y)
{
	int	ord;
	int	abs;

	ord = 1;
	if (x <= 0 || y <= 0)
	{
		while (ord <= y)
		{
			abs = 1;
			print_line(ord, abs, x, y);
			write(1, "\n", 2);
			ord++;
		}
	}
}
