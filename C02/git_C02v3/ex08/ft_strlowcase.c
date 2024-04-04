/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:15:23 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/18 17:15:36 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	tab1[] = {"bon614654jour"};
	char	tab2[] = {"BO9846NJ4165OUR"};

	printf("Avant = %s",tab2);
	ft_strlowcase(tab2);
	printf("\n");
	printf("Apres = %s",tab2);
	return (0);
}*/
