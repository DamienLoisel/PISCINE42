/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:25:11 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/26 12:07:20 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb < 2)
	{
		return (2);
	}
	while (ft_is_prime(i) == 0)
	{
		i++;
	}
	return (i);
}

/*int	main(void)
  {
  printf("%d\n",ft_find_next_prime(811));
  return (0);
  }*/
