/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:42:22 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/17 17:39:01 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	tab1[] = "123456";
	char	tab2[] = "12345ADAD6";
	int	flag;

	flag = ft_str_is_numeric(tab1);
	printf("return = %d",flag);
	return (0);
}*/
