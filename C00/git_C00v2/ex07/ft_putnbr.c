/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:25:39 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/17 16:10:18 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	int		index;
	int		temp;

	temp = nb;
	index = 0;
	if (nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
	}
	if(nb > 10)
	{
		write(1,"0",1);
		nb = nb / 10;
		ft_putnbr(nb);
	}
	write(1,&nb,1);
}

int	main(void)
{
	int	n;

	n = 10000;
	ft_putnbr(n);
	return (0);
}
