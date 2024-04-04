/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:56:53 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/18 17:01:11 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	tab1[] = {25,127};
       	char	tab2[] = {"Salut!"};
	int	flag;

	flag = ft_str_is_printable(tab2);
	printf("return = %d",flag);
	return (0);	
}*/
