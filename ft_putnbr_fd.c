/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:56:38 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/17 17:18:20 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s[11];
	size_t	i;

	i = 0;
if (n == -2147483648)
		write(fd, "-2147483648", 11);
}

//static void	write



//from ft_putnbr_fd

/*	
	else
	{
		s = ft_itoa(n);
		if (!s)
			return ;
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
//		free(s);
	}*/