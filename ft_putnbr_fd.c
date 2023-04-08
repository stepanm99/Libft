/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:56:38 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/08 18:08:34 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*edge(void)
{
	char	*ptr;

	ptr = ft_calloc(12, sizeof(char));
	ptr[11] = '\0';
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[2] = '1';
	ptr[3] = '4';
	ptr[4] = '7';
	ptr[5] = '4';
	ptr[6] = '8';
	ptr[7] = '3';
	ptr[8] = '6';
	ptr[9] = '4';
	ptr[10] = '8';
	return (ptr);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	size_t	i;

	i = 0;
	if (n == -2147483648)
		s = (char *)edge();
	else
		s = ft_itoa(n);
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	free(s);
}
