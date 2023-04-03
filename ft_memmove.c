/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:33:16 by smelicha          #+#    #+#             */
/*   Updated: 2023/03/28 18:08:59 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(char *dest, char *src, int l)
{
	int		i;

	i = 0;
	if (dest < src)
	{
		while (l > 0)
		{
			dest[i] = src[i];
			l--;
			i++;
		}
		return (dest);
	}
	i = l - 1;
	if (dest > src)
	{
		while (l > 0)
		{
			dest[i] = src[i];
			l--;
			i--;
		}
		return (dest);
	}
}
