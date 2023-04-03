/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:15:53 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/02 21:01:55 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n != 0)
	{
		while (n != 0)
		{
			if (*s1 != *s2)
				return ((int)*s1 - (int)*s2);
			s1++;
			s2++;
			n--;
		}
	}
	
	return (0);
}

/*if (n == 0)
		return (0);
	while ((*(char *)(str1) == *(char *)(str2)) && (n != 0))
	{
		str1++;
		str2++;
		n--;
	}
	return (*(unsigned char *)(str1) - *(unsigned char *)(str2));*/