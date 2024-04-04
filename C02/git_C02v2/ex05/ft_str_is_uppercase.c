/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:48:53 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/17 17:59:01 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str [i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char tab1[] = {"Salut"};
	char tab2[] = {"SALUT"};
	int flag;
	
	flag = ft_str_is_uppercase(tab2);
	printf("return = %d",flag);
	return (0);
}*/
