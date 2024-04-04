/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:53:35 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/16 18:31:54 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	index;
	int	nb_boucle;

	nb_boucle = 0;
	index = 0;
	while (nb_boucle < size - 1)
	{
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				temp = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = temp;
			}
			index++;
		}
		index = 0;
		nb_boucle++;
	}
}

/*int	main(void)
{
	int	tab[]={1,5,4,9,2,3};
	int	i;
	int	size;

	size = 6;
	i = 0;

	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d " , tab[i]);
		i++;
	}
	return (0);
}*/
