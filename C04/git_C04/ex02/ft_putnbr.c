/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:56:54 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/21 19:01:22 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1,"-2147483648",11);
		return ;
	}

	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}*/
