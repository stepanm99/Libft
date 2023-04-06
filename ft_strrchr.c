/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:06:55 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/04 18:23:47 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	char		*ptr;

	i = 0;
	ptr = NULL;
	if ((char) c == '\0')
		return (str + ft_strlen(str));
	if (str[i] == (char) c)
		ptr = (char *) str;
	while (str[i])
	{
		if (str[i] == (char) c)
			ptr = ((char *) str + i);
		i++;
	}
	return (ptr);
}
