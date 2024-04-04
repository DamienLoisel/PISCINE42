/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:29:11 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/23 10:52:45 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_isspace3(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == 32)
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	signe;

	nb = 0;
	signe = 0;
	i = ft_isspace3(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
	if (signe % 2 != 0)
		signe = -1;
	else
		signe = 1;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	nb = nb * signe;
	return (nb);
}

/*int	main(void)
{
	char	tab[] = {"   ---+--+1234ab567"};
	int	nb;

	nb = ft_atoi(tab);
	printf("%d",nb);
}*/
