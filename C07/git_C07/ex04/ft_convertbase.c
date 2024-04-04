/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertbase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:08:04 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/28 15:20:06 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	verif_base(char	*str);
int	ft_strlen(char	*str);
int	ft_atoi(int taille_base, char *str, char *base);
int	ft_atoi_base(char *str, char *base);

void	convert_base(long int nb, char *base, int taille_finale, char *tab)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		tab[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
	{
		tab[0] = base[0];
	}
	while (nb > 0)
	{
		tab[taille_finale - i] = base[nb % ft_strlen(base)];
		nb = nb / ft_strlen(base);
		i++;
	}
}

int	taille_nbr_base_to(int nb, char *base_to)
{
	int	valeurbase;
	int	taille;

	taille = 0;
	valeurbase = ft_strlen(base_to);
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= valeurbase;
		taille++;
	}
	return (taille);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		taille_finale;
	int		nb;
	char	*tab;

	nb = 0;
	taille_finale = 0;
	if (ft_strlen(base_from) < 2 || ft_strlen(base_to) < 2)
		return (NULL);
	if (verif_base(base_to) == 1 || verif_base(base_from) == 1)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	if (nb < 0)
	{
		taille_finale++;
	}
	taille_finale += taille_nbr_base_to(nb, base_to);
	tab = malloc (sizeof(char) * taille_finale + 1);
	if (tab == NULL)
		return (NULL);
	convert_base(nb, base_to, taille_finale, tab);
	return (tab);
}

/*int	main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
}*/
