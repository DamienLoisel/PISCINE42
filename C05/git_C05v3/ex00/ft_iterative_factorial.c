/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:17:51 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/21 12:35:26 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 1)
	{
		return (0);
	}
	while (i <= nb)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}

/*int	main(void)
{
	printf("Resultat = %d",ft_iterative_factorial(1));
	return (0);
}*/
