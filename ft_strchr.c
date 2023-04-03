/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:42:42 by smelicha          #+#    #+#             */
/*   Updated: 2023/03/28 21:08:57 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t		i;

	i = 0;
	if ((char) c == '\0')
	{
		while (str[i] != '\0')
			i++;
		return ((char *) str + i);
	}
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] != '\0')
		return ((char *) str + i);
	else
		return (NULL);
}
