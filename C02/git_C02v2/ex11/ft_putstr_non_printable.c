/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:39:32 by dloisel           #+#    #+#             */
/*   Updated: 2024/03/19 15:56:07 by dloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hexa(unsigned char c)
{
	char	*hexa;
	
	hexa = "0123456789abcdef";
	write(1, &hexa[c / 16], 1);
	write(1,&hexa[c % 16], 1);
}


void	ft_putstr_non_printable(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			write(1,"\\",1);
			print_hexa(str[i]);
		}
		else
		{
			write(1,&str[i],1);
		}
		i++;
	}
}

/*int	main(void)
{
	char tab1[] = {"Coucou\ntu vas bien ?"};

	ft_putstr_non_printable(tab1);
	return (0);
}*/
