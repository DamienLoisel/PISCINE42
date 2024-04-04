/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:08:18 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/30 18:13:54 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tableau;

	i = 0;
	tableau = malloc (sizeof(struct s_stock_str) * ac + 1);
	if (tableau == NULL)
		return (0);
	while (i < ac)
	{	
		tableau[i].size = ft_strlen(av[i]);
		tableau[i].str = av[i];
		tableau[i].copy = malloc(sizeof(char) * (tableau[i].size + 1));
		if (tableau[i].copy == NULL)
			return (0);
		ft_strcpy(tableau[i].copy, av[i]);
		i++;
	}
	tableau[i].str = 0;
	return (tableau);
}
