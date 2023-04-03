/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:22:26 by smelicha          #+#    #+#             */
/*   Updated: 2023/03/28 21:08:11 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t l)
{
	size_t	i;
	char	*p;

	i = 0;
	p = str;
	while (l > 0)
	{
		p[i] = c;
		i++;
		l--;
	}
	return (p);
}
