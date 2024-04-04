/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:09:42 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/24 17:13:21 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	multiplicateur;

	i = 1;
	multiplicateur = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		nb = multiplicateur * nb;
		i++;
	}
	return (nb);
}

/*int	main(void)
{
	printf("Resultat = %d", ft_iterative_power(5,3));
	return (0);
}*/
