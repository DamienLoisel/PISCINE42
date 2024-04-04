/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:08:41 by dloisel           #+#    #+#             */
/*   Updated: 2024/04/01 13:55:58 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	i = 0;
	temp = malloc(sizeof(int) * (max - min));
	if (temp == NULL)
		return (-1);
	if (min >= max)
	{
		temp = NULL;
		return (0);
	}
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	*range = temp;
	return (i);
}

/*int	main(void)
{
	int *range;

	printf("Warn: Any segfault will mean that 
	arrays are not correctly allocated\n");

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n"
	, range[0], range[1], range[2], range[3], range[4]);

	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));

	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/
