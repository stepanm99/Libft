/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:06:55 by smelicha          #+#    #+#             */
/*   Updated: 2023/03/28 21:40:23 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	size_t		n;

	i = 0;
	n = 0;
	if ((char) c == '\0')
	{
		while (str[i] != '\0')
			i++;
		return ((char *) str + i);
	}
	while (str[i] != '\0')
	{
		if (str[i] == c)
			n = i;
		i++;
	}
	if (str[n] == c)
		return ((char *) str + n);
	else
		return (NULL);
}
