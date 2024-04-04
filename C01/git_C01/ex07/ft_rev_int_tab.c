/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:09:50 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/16 18:30:36 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	debut;
	int	fin;
	int	temp;

	debut = 0;
	fin = size - 1;
	while (debut < fin)
	{
		temp = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = temp;
		debut++;
		fin--;
	}
}

/*int	main(void)
{
	int	tab[] = {1,2,3,4,5};
	int	size;
	int	index;

	size = 5;
	index = 0;

	while (tab[index] != '\0')
	{
		printf("%d ", tab[index]);
		index++;
	}
	index = 0;
	printf("\n");
	ft_rev_int_tab(tab, size);
	while (tab[index] != '\0')
	{
		printf("%d ",tab[index]);
		index++;
	}
	return (0);
}*/
