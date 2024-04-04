/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:42:09 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/21 15:44:00 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace3(char *str)
{
	int	i;
	int	nb_space;

	i = 0;
	nb_space = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '\f' || str[i] == '\n' || str[i] == '\n'
				|| str[i] == '\r' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == 32))
		{
			nb_space++;
		}
		i++;
	}
	if (nb_space > 0)
	{
		return (1);
	}
	return (0);
}

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

void	print_base(int nb, char *base, int valeurbase)
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
	int	valeurbase;
	int	nb;
	int	flag;

	nb = nbr;
	flag = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		flag = 1;
	}
	valeurbase = ft_strlen(base);
	if (verif_para(base) == 1 || ft_isspace3(base) == 1)
		return ;
	if (flag == 1)
		write(1, "-", 1);
	print_base(nb, base, valeurbase);
}

/*int	main(void)
{
	char tab[] = {"0123456789"};
	ft_putnbr_base(-42, tab);
	return (0);
}*/
