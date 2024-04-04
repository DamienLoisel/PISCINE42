/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertbase2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:49:20 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/28 15:16:41 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	verif_base(char *str)
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
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			return (1);
		i++;
	}
	return (0);
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

int	ft_atoi(int taille_base, char *str, char *base)
{
	int	nb;
	int	signe;
	int	i;

	i = 0;
	signe = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
	while (str[i] != '\0' && index_base(str[i], base) != -1)
	{
		nb = nb * taille_base + index_base(str[i], base);
		i++;
	}
	if (signe % 2 != 0)
		nb = -nb;
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	taille_base;
	int	nb;

	nb = 0;
	taille_base = ft_strlen(base);
	if (verif_base(base) == 1)
		return (0);
	nb = ft_atoi(taille_base, str, base);
	return (nb);
}
