/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:25:06 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/19 10:16:19 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<unistd.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = "Salut";
	char dest[20];
	int index;

	index = 0;
	ft_strcpy(dest, src);
	while(dest[index] != '\0')
	{
		write(1,&dest[index],1);
		index++;
	}
	return (0);
}*/
