/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:14:34 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/20 15:19:20 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	if (dest_size >= size)
	{
		return (ft_strlen(src) + size);
	}
	while (i < (size - dest_size - 1) && src[i] != '\0')
	{
		dest[i + dest_size] = src[i];
		i++;
	}
	dest[i + dest_size] = '\0';
	return (dest_size + ft_strlen(src));
}

/*int	main(void)
{
	char dest[] = {"Hello "};
	char src[] = {"World!"};

	printf("Taille : %d\n",ft_strlcat(dest, src, 20));
	printf("Concatenation : %s", dest);
	return (0);
}*/
