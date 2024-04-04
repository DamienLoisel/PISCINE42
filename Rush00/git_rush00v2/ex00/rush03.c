/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnedel <tnedel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 09:48:49 by tnedel            #+#    #+#             */
/*   Updated: 2024/03/16 15:01:30 by tnedel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	print_line_ext(int ord, int abs, int x, int y)
{
	if (ord == 1)
	{
		ft_putchar('A');
		while (abs <= (x - 2))
		{
			ft_putchar('B');
			abs++;
		}
		if (abs != 1)
			ft_putchar('C');
	}
	else if (ord == y)
	{
		ft_putchar('A');
		while (abs <= (x - 2))
		{
			ft_putchar('B');
			abs++;
		}
		if (abs != 1)
			ft_putchar('C');
	}
}

void	print_line_m(int abs, int x)
{
	ft_putchar('B');
	while (abs <= (x - 2))
	{
		ft_putchar(' ');
		abs++;
	}
	if (abs != 1)
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	ord;
	int	abs;

	ord = 1;
	if (x > 0 || y > 0)
	{
		while (ord <= y)
		{
			abs = 1;
			if (ord == 1 || ord == y)
				print_line_ext(ord, abs, x, y);
			else
				print_line_m(abs, x);
			write(1, "\n", 2);
			ord++;
		}
	}
	return ;
}
