/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:29:55 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/24 16:20:14 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int   main(void)
{
        printf("Resultat = %d",ft_recursive_factorial(8));
        return (0);
}*/
