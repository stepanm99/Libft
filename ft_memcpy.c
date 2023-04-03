/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:13:04 by smelicha          #+#    #+#             */
/*   Updated: 2023/03/28 18:04:24 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(char *dest, char *src, int l)
{
	int	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (l > 0)
	{
		dest[i] = src[i];
		l = l - 1;
		i = i + 1;
	}
	return (dest);
}
