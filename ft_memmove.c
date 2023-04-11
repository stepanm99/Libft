/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:33:16 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/10 22:13:00 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	dsts(char *dest, char *src, int l)
{
	size_t	i;

	i = 0;
	while (l > 0)
	{
		dest[i] = src[i];
		l--;
		i++;
	}
}

static void	sstd(char *dest, char *src, int l)
{
	size_t	i;

	i = l - 1;
	while (l > 0)
	{
		dest[i] = src[i];
		l--;
		i--;
	}
}

void	*ft_memmove(char *dest, char *src, int l)
{
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		dsts(dest, src, l);
		return (dest);
	}
	if (dest > src)
	{
		sstd(dest, src, l);
		return (dest);
	}
	return (NULL);
}
