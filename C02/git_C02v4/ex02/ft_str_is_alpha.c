/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:15:05 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/17 17:25:18 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	tab1[] = {"*()*(*^&*%"};
	char	tab2[] = {"Salut"};
	int	flag;
	
	flag = ft_str_is_alpha(tab2);
	printf("Le return = %d",flag);
	return (0);
}*/
