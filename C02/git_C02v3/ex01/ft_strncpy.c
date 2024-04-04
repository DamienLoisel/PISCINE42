/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:27:37 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/19 10:27:37 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((index < n) && (src[index] != '\0'))
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = {"Salut"};
	char	dest[20];
	unsigned int	taille;
	int index;

	taille = 3;
	index = 0;
	ft_strncpy(dest, src, taille);
	printf("%s",dest);
	return (0);
}*/
