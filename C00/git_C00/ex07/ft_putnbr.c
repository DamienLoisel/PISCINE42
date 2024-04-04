/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:25:39 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/14 16:48:17 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	inverse_tab(char tab[], int taille)
{
	int		debut;
	int		fin;
	int		temp;

	debut = 0;
	fin = taille - 1;
	while (debut < fin)
	{
		temp = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = temp;
		debut++;
		fin--;
	}
}

void	ft_putnbr(int nb)
{
	char	tab[20];
	int		index;
	int		temp;

	temp = nb;
	index = 0;
	if (nb < 0)
	{
		tab[index++] = '-';
		nb = -nb;
	}
	while (temp != 0)
	{
		tab[index++] = temp % 10 + '0';
		temp = temp / 10;
	}
	inverse_tab(tab, index);
	write(1, tab, index);
}

/*int	main(void)
{
	int	n;

	n = 0;
	ft_putnbr(n);
	return (0);
}*/
