/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:03:05 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/25 17:49:23 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int *)malloc(sizeof(max - min));
	if (tab == NULL)
		return (tab);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*int	main(void)
{
	int *range;

	printf("Warn: Don't forget to check that the array is of 
	the correct size manually ! 
	Can't know size of `malloc` arrays\n");
	printf("Warn: Any segfault will mean 
	that arrays are not correctly allocated\n");

	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n"
	, range[0], range[1], range[2], range[3], range[4]);

	range = ft_range(3, 3);

	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/
