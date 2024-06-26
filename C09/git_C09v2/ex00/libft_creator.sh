# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dloisel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/31 18:22:55 by dloisel           #+#    #+#              #
#    Updated: 2024/04/03 18:18:36 by dloisel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a

find . -name "*.c" -exec cc -Wall -Werror -Wextra -c {} \;

ar -rc  libft.a *.o

rm -f *.o
