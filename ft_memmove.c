/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:33:16 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/03 19:08:37 by smelicha         ###   ########.fr       */
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
	return (NULL);
}
