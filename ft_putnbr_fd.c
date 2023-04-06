/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:56:38 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/06 21:46:47 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	size_t	i;

	i = 0;
	s = ft_itoa(n);
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

static int	getlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	getdigit(int n, char *ptr, int neg, int l)
{
	size_t	i;

	i = 0;
	if (neg)
	{
		ptr[0] = '-';
	}
	if (n == 0)
		ptr[0] = '0';
	ptr[l] = '\0';
	while (n > 0)
	{
		ptr[l - 1] = ((n % 10) + '0');
		n = n / 10;
		l--;
	}
	return (0);
}
