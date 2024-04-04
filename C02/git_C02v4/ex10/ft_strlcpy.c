/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:15:07 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/19 17:01:44 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	taille;

	i = 0;
	taille = ft_strlen(src);
	if (size < 1)
	{
		return (taille);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (taille);
}

/*int	main(void)
{
	char dest[] = {""};
	char src[] = {"Bonjour!"};
	ft_strlcpy(dest, src,6);
	printf("Copie = %s \n",dest);
	printf("Taille = %d",ft_strlcpy(dest,src, 6));
	return (0);
}*/
