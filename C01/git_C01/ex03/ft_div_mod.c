/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:19:52 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/15 10:20:55 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 10;
	b = 2;
	ft_div_mod(a,b,&div,&mod);
	printf("div = %d",div);
	printf("\n");
	printf("mod = %d", mod);
	return (0);

}*/
