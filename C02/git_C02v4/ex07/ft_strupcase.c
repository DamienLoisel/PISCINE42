/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:08:54 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/17 18:25:00 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	tab1[] = {"SAL91638UT"};
	char	tab2[] = {"bon6518jour"};
	
	printf("Avant = %s",tab2);
	ft_strupcase(tab2);
	printf("\n");
	printf("Apres = %s",tab2);
}*/
