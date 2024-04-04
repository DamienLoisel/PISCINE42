/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:39:15 by dloisel           #+#    #+#             */
/*   Updated: 2024/04/01 12:37:42 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
}

int	taille(int size, char **strs, char *sep)
{
	int	taille_str;
	int	i;

	i = 0;
	taille_str = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		taille_str += ft_strlen(strs[i]);
		i++;
	}
	taille_str += 1;
	return (taille_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		taille_str;
	int		i;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	taille_str = taille(size, strs, sep);
	str = malloc(sizeof(char) * taille_str);
	if (str == NULL)
		return (str);
	ft_strcpy(str, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i]);
		i++;
	}
	return (str);
}

/*int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}*/
