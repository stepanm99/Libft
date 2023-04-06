/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:52:18 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/04 18:38:46 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	n--;
	while (*(char *)(s + i) != (char) c && i < n)
		i++;
	if (*(char *)(s + i) == (char) c)
		return ((void *)(s + i));
	else
		return (NULL);
}

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*(char *)(s + i) != c && i < n)
		i++;
	if (*(char *)(s + i) == c)
		return ((void *)(s + i));
	else
		return (NULL);
	return (0);
}
*/