/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:20:59 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/14 14:54:39 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	affichage(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	ft_putchar(' ');
	write (1, &c, 1);
	write (1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9' )
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	comb(int m, int c, int d, int u)
{
	while (m <= '9')
	{
		while (c <= '8')
		{
			while (d <= '9')
			{
				while (u <= '9')
				{
					affichage(m, c, d, u);
					u++;
				}
				u = '0';
				d++;
			}
			d = '0';
			c++;
		}
		c = '0';
		m++;
	}
}

void	ft_print_comb2(void)
{
	char	m;
	char	c;
	char	d;
	char	u;

	m = '0';
	c = '0';
	d = '0';
	u = '1';
	comb(m, c, d, u);
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
