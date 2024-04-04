/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:42:09 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/29 12:55:02 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verif_para(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!*str)
		return (1);
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		if (str[i] == '-' || str[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	print_base(long int nb, char *base, long int valeurbase)
{
	if (valeurbase <= 1)
	{
		return ;
	}
	if (nb >= valeurbase)
	{
		print_base(nb / valeurbase, base, valeurbase);
	}
	write (1, base + (nb % valeurbase), 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	valeurbase;
	long int	nb;

	nb = nbr;
	if (verif_para(base) == 1)
		return ;
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	valeurbase = ft_strlen(base);
	print_base(nb, base, valeurbase);
}

/*int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}*/
